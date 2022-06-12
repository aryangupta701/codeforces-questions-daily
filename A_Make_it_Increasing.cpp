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


void fun(){
     ll n,mx=INT_MIN; 
     cin>>n; 
     vector<ll> v(n); 
     for(int i=0; i<n; i++) {
        cin>>v[i]; 
        mx = max(mx,v[i]);
     }
    ll ans = LLONG_MAX;
    for(int i=0; i<n; i++){
        ll prev = 0,count=0;
        for(ll j=i-1; j>=0; j--){
            if(v[j] == 0) {
                count = LLONG_MAX;
                break;
            }
            ll t = prev/abs(v[j]) + 1;
            prev = abs(v[j]*t);
            count += t;
        }
        prev = 0;
        for(ll j=i+1; j<n; j++){
            if(v[j] == 0) {
                count = LLONG_MAX;
                break;
            }
            ll t = prev/abs(v[j]) + 1;
            prev = abs(v[j]*t); 
            count += t;
        }
        ans = min(ans,count);
    }
    cout<<ans;
    
}

signed main() {
       fastio();
       fun();
       return 0;
}