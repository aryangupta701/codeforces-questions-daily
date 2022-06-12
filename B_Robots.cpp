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
     cin>>n>>m; 
     vector<string> mat(n);
     for(int i=0; i<n; i++) cin>>mat[i];
     ll a=-1,b=-1,x=-1,y=-1; 
     for(int i=0; i<n; i++){
         for(int j=0; j<m; j++){
             if(mat[i][j] == 'R'){
                 a = i, b=j; 
                 break;
             }
         }
         if(a!=-1) break;
     }
     for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){
             if(mat[j][i] == 'R'){
                 y = i, x=j; 
                 break;
             }
         }
         if(x!=-1) break;
     }
     if(a==x && b==y && a!=-1) {
         yes
     }
     else no
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}