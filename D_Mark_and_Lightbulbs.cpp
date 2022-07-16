#include <bits/stdc++.h>

using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define yes cout<<"YES";
#define no cout<<"NO";
#define nline "\n"
#define vi vector<int> 
#define vvi vector<vector<int> > 
#define set_bits __builtin_popcountll

ll power(ll x, ll y)
{   ll res = 1;
    while (y){
        if (y % 2 == 1) res = (res * x);
        y = y >> 1; if(!y) break; x = (x * x);
    } return res;
}
string reverse(string s , ll n=-1){
    if(n==-1){
        n = s.length();
    }
   for(int i=0; i<n/2; i++){
      char t = s[i];
      s[i] = s[n-i-1];
      s[n-i-1] = t;
   }
   return s;
}

ll gcd(ll a, ll b){
    if( a == 0) return b; 
    return gcd(b%a,a);
}


void fun(){
     ll n; string s,t; cin>>n; cin>>s>>t; 
     if(s[n-1] != t[n-1] || s[0] != t[0]){
        cout<<-1; 
        return;
     }
     ll ans = 0;
     vector<pair<char,ll>> sb,tb; 
     sb.push_back({'/',0});
     tb.push_back({'/',0});
     for(ll i=0; i<n; i++){
        if(sb.back().first == s[i]){
            sb.back().second++;
        }
        else sb.push_back({s[i],1});
        if(tb.back().first == t[i]){
            tb.back().second++;
        }
        else tb.push_back({t[i],1});
     }
     if(sb.size() != tb.size()) {
        cout<<-1;
        return ;
     }
     ll len = sb.size();
     for(int i=0; i<len; i++){
        if(sb[i].first != tb[i].first){
            cout<<-1;
            return;
        }
     }
     for(ll i=1; i<len-1; i++){
        // if(i == len){
        //     if(sb[i].second != tb[i].second){
        //         cout<<-1; 
        //         return;
        //     }
        // }
        ll x = sb[i].second - tb[i].second;
        ans += abs(x);
        sb[i].second = tb[i].second;
        sb[i+1].second += x;
     }
     cout<<ans;

}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}