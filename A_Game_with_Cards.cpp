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
     ll n,m; 
     cin>>n; 
     vector<ll> a(n);
     ll mx1=INT_MIN,mx2=INT_MIN;
     for(int i=0; i<n; i++){
          cin>>a[i];
          mx1 = max(mx1,a[i]);
     }
     cin>>m; 
     vector<ll> b(m);
     for(int i=0; i<m; i++){
          cin>>b[i];
          mx2 = max(mx2,b[i]);
     }
     if(mx1>mx2){
         cout<<"Alice"<<endl<<"Alice";
     }
     else if(mx2>mx1){
         cout<<"Bob"<<endl<<"Bob";
     }
     else{
         cout<<"Alice"<<endl<<"Bob";
     }
     
    //  sort(a.begin(),a.end());
    //  sort(b.begin(),b.end());

}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}