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
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin>>a[i];  
    ll diff = 0;  
    for(ll i=0; i<n; i++) cin>>b[i]; 
    bool flag = false;
    ll zDiff = INT_MIN;
    for(ll i=0; i<n; i++){
        if(b[i] > a[i]) {
            no return;
        }
        if(b[i] == 0) {
            zDiff = max(zDiff , a[i]);
            continue;
        } 
        if(!flag ) {
            diff = a[i]-b[i];
            flag = true;
        }
        if(diff != a[i]-b[i]){
            no 
            return;
        }
    }
    if( flag && diff < zDiff) {
        no return;
    }
    yes
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}