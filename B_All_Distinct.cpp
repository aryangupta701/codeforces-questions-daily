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
     ll n; 
     cin>>n; 
     vector<ll> v(n);
     map<ll,ll> m;
     for(ll i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]] ++;
     }
     int ans = 0;
     ll count = 0;
    for(auto it: m){
        if(it.second%2 == 1){
            ans++;
        }
        else count++;
    }
    if(count%2 == 1) count--;
    cout<<ans+count;;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}