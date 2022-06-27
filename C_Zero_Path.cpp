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
string reverse(string s , ll n=-1){
    if(n==-1){
        n = s.length();
    }
   for(int i=0; i<n/2; i++){
      char t = s[i];
      s[i] = s[n-i-1];
      s[n-i-1] = t;
   }
   return s;
}

ll gcd(ll a, ll b){
    if( a == 0) return b; 
    return gcd(b%a,a);
}
bool ans;
ll n,m;
bool dp[1000][1000];

bool solve(vector<vector<int> >& grid, int i , int j,int curr ){
    curr += grid[i][j];
    if(i==n-1 && j==m-1){
        if(curr == 0) return dp[i][j] = true;
        return false;
    }
    bool x=false,y;
    if(i<n-1){
        x = solve(grid,i+1,j,curr);
    }

    if(j<m-1 && !x){
        y = solve(grid,i,j+1,curr);
    }
    return dp[i][j] = x|y;
}
void fun(){
     cin>>n>>m; 
     memset(dp,-1,sizeof(dp));
     vector<vector<int> > grid(n,vector<int>(m));
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
     }
     ans = false; 
     if(solve(grid,0,0,0)) yes
     else no
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}