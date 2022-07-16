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
     ll n,c,q; 
     cin>>n>>c>>q; 
     string s; 
     cin>>s; 
     ll l,r;
     vector<pair<pair<ll,ll>,pair<ll,ll>>> intervals;
     intervals.push_back({{1,n},{0,0}});
     while(c--){
        cin>>l>>r; 
        ll last = intervals.back().first.second;
        intervals.push_back({{last+1,last+(r-l+1)},{l,r}});
     }
     c = intervals.size();
     ll k;
    //  for(ll i=0; i<c; i++)
    //  {
    //     cout<<intervals[i].first.first<<" "<<intervals[i].first.second<<endl;
    //     cout<<intervals[i].second.first<<" "<<intervals[i].second.second<<endl;
    //  }
     while(q--){
        cin>>k; 
        while(k>n){
            for(int i=1;i<c;i++){
                ll l,r;
                l = intervals[i].first.first; 
                r = intervals[i].first.second;
                if(k>=l && k<=r){
                    ll gap = k - l;
                    k = intervals[i].second.first + gap;
                    break;
                }
            }
        }
        cout<<s[k-1]<<endl;
     }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun();
       return 0;
}