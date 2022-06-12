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

ll maximum(vector<ll>& v, int i, int j){
    ll mx = v[i];
    while(i<=j){
        mx = max(mx,v[i]);
        i++;
    }
    return mx;
}

void fun(){
     int n; 
     cin>>n;
     vector<ll> v(n);
     bool flag = true;
     for(int i=0; i<n; i++) {
         cin>>v[i];
         if(v[i]>0){
             flag = false;
         }
     }
     if(flag) {
         yes
         return;
     }
    for(int i=0; i<n-1; i++){
        if(v[i]>0 && v[i+1]>0){
            no 
            return;
        }
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