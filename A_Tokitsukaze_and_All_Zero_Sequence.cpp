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
     bool flag = false;
     ll count=0;
     for(int i=0 ; i<n; i++){
         cin>>v[i];
         if(v[i]==0){
             count++;
         }
     } 
     sort(v.begin(), v.end());
     for(int i=1 ; i<n; i++){
         if(v[i] == v[i-1]){
             flag = true;
             break;
         }
     }
     if(count != 0) {
        cout<<n-count; 
        return ;
     }
     if(flag) cout<<n; 
     else cout<<n+1;

}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}