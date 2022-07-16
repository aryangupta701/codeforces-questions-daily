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

ll find(ll i , ll l ,ll r){
    ll gap = l%i;
    if(gap == 0) return l;
    ll x = l+(i-gap);
    if(x >= l && x<=r){
        return x; 
    }
    return -1;
}

void fun(){
     ll n; cin>>n; 
     ll l,r; cin>>l>>r; 
     vector<ll> v(n);
     if(n == 1){
        yes cout<<endl; 
        cout<<l; return;
     }
     for(ll i=0; i<n; i++){
        v[i] = find(i+1,l,r);
        if(v[i] == -1){
            // cout<<i+1;
            no return;
        }
     }
     yes cout<<endl; 
     for(ll i=0; i<n; i++){
        cout<<v[i]<<" ";
     }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}