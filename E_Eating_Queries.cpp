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

ll calculateUpperBound(vector<ll> &v,ll t, ll n){
    if(t > v[n-1]) return -1;
    ll high = n-1  , low = 0; 
    while(low<=high){
        ll mid = low + (high-low)/2;
        if(v[mid] == t){
            return mid+1;
        }
        if(v[mid] < t ){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return low+1 ;
}
void fun(){
     ll n,k; 
     cin>>n>>k; 
     vector<ll> v(n); 
     for(ll i=0; i<n; i++){
        cin>>v[i];
     }
     vector<ll> t(k);
     for(int i=0; i<k; i++) cin>>t[i];

     sort(v.begin(), v.end());
     reverse(v.begin(), v.end());

     for(ll i=1; i<n; i++){
         v[i] += v[i-1];
     }
     for(ll i=0; i<k ; i++){
        cout<<calculateUpperBound(v,t[i],n)<<endl;
     }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun();
       return 0;
}