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
    ll mx = 0;
    vector<vector<ll> > mat(n, vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>mat[i][j];
            mx = max(mx,mat[i][j]);
        }
    }
    if(n==1 || m==1) {
        cout<<mx; 
        return ;
    }
    vector<ll> rd(n+m-1,0);
    vector<vector<ll> > ld(2,vector<ll>((n+m),0));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            rd[i+j]+=mat[i][j];
            if(i>=j){
                ld[1][i-j]+=mat[i][j];
            }
            if(j>=i){
                ld[0][j-i]+=mat[i][j];
            }
        }
    }

    ll ans = 0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ll r = rd[i+j] ,l;
            if(i>j){
                l = ld[1][i-j];
            }else{
                l = ld[0][j-i];
            }
            ans = max(ans,r+l-mat[i][j]);
        }
    }
    cout<<ans; 
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}