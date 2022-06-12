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
     ll oddcount = 0,evencount = 0;
     vector<ll> v(n);
     for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2==0) {
            evencount++;
        }
        else oddcount++;
     }
     if(evencount == 0) {
         cout<<0; 
         return ;
     } 
     if(oddcount > 0){
         cout<<n-oddcount; 
         return ;
     }
     ll mn = INT_MAX; 
     for(int i=0; i<n; i++){
         ll x = 1; 
         while(!((v[i]>>x)&1)){
             x++;
         }
         mn = min(mn,x);
     }
     ll newodds = 1<<mn; 
    cout<<n-1+mn;    
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}