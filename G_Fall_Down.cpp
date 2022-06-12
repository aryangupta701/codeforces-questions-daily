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
     vector<vector<char>>grid(n,vector<char>(m));
     for(ll i=0; i<n; i++)
     for(ll j=0; j<m; j++)
     cin>>grid[i][j];
     
     for(ll j=0; j<m; j++){
         ll c = 0;
         for(ll i=0; i<n; i++){
             if(grid[i][j] == '*'){
                 grid[i][j] = '.';
                 c++; 
             }
             else if(grid[i][j] == 'o'){
                 ll x =1;
                 while(c>=x){
                     grid[i-x][j] = '*';
                     x++;
                 }
                 c = 0;
             }
         }
         ll x = 0;
         while(c>x){
            grid[n-x-1][j] = '*';
            x++;
         }
     }

     for(ll i=0; i<n; i++){
     for(ll j=0; j<m; j++)
     cout<<grid[i][j];
     cout<<endl;
     }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}