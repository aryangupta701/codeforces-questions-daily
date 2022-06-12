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
     vector<ll> v(n),temp(n);
     for(int i=0; i<n; i++) {
        cin>>v[i];
        temp[i] = v[i];
     }
     if(n==1) {
        cout<<-1; 
        return;
     }
     sort(v.begin(), v.end());

     for(int i=0; i<n-1; i++){
        if(v[i] == temp[i]){
            ll t = v[i];
            v[i] = v[i+1];
            v[i+1] = t;
        }
     }

     if(v[n-1] == temp[n-1]){
        v[n-1] = v[n-2];
        v[n-2] = temp[n-1];
     }

     for(int i=0; i<n; i++) {
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