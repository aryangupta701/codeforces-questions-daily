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
     vector<vector<char>> v(8,vector<char>(8));
     for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>v[i][j];
        }
     }
     for(int i=1; i<7; i++){
        for(int j=1; j<7; j++){
            if(v[i][j] == '#'){
                if(v[i-1][j-1] == '#' && v[i+1][j+1]=='#' && v[i+1][j-1]=='#' && v[i-1][j+1]=='#'){
                    cout<<i+1<<" "<<j+1;
                    return;
                }
            }
        }
     }
    cout<<-1;
    return;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}