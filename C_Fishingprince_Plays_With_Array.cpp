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
     ll n,m; cin>>n>>m; 
     vector<ll> v(n);
     for(ll i=0; i<n; i++) cin>>v[i];
     ll k; cin>>k;
     vector<ll> b(k);
     for(ll i=0; i<k; i++) cin>>b[i];
     vector<pair<ll,ll>> a1 = {{0,0}},a2={{0,0}};
     for(ll i=0; i<n; i++){
        ll curr = 1; 
        while(v[i]%m == 0){
            curr *= m;
            v[i] /= m;
        }
        if(a1.back().first == v[i] ){
                a1.back().second += curr; 
        }
        else {
            a1.push_back({v[i],curr});
        }
     } 
     for(ll i=0; i<k; i++){
       ll curr = 1; 
        while(b[i]%m == 0){
            curr *= m;
            b[i] /= m;
        }
        if(a2.back().first == b[i] ){
                a2.back().second += curr; 
        }
        else {
            a2.push_back({b[i],curr});
        }
     } 
     if(a1 == a2){
        yes return ;
     }
     no return ;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}