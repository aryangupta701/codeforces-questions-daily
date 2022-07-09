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
    ll n,x; cin>>n>>x; 
    vector<ll> v(n); 
    for(ll i=0; i<n; i++) cin>>v[i];
    if(x==1){
        yes return;
    }
    for(int i=0; i<n-1; i++) {
        // cout<<i;
        if(v[i]>v[i+1]) {
            break;
        }
        if(i==n-2) {
            yes return;
        }
    }
    if(x==n) {
        no return ;
    }
    if(x<=(n)/2) {
        yes
        return ;
    }
    vector<ll> ans,temp;
    ll len = n-x;
    for(int i=0; i<len; i++){
        ans.push_back(v[i]);
    }

    for(int i=0; i<len; i++){
        ans.push_back(v[n-1-i]);
    }

    sort(ans.begin(),ans.end());

    for(int i=0; i<len; i++){
        temp.push_back(ans[i]);
    }

    for(int i=len; i<x; i++){
        temp.push_back(v[i]);
    }

    for(int i=len; i<2*len; i++){
        temp.push_back(ans[i]);
    }

    for(int i=0; i<n-1; i++) {
        if(temp[i]>temp[i+1]) {
            break;
        }
        if(i==n-2) {
            yes return;
        }
    }
    no return;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}