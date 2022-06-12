// #include<bits/stdc++.h>
// using namespace std; 



// int main(){
//     int t;
//     cin>>t; 
//     vector<int> cases(t);
//     for(int i=0; i<t; i++)
//     cin>>cases[i];
//     for(int i=0; i<t; i++){
//         int a=1,b=1,c=1; 
//         int num = cases[i];
//         for(int j=2; j*j<=num; j++){
//             if(num%j == 0){
//                 a = j;
//                 break;
//             }
//         }
//         for(int j=a+1; j*j<=num; j++){
//             if(num%j == 0){
//                 b = j;
//                 break;
//             }
//         }
//         c = num/(a*b);
//         if( !(a==b || b==c || c==a || c==1) ){
//             cout<<"YES"<<endl;
//             cout<<a<<" "<<b<<" "<<c<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }

//     return 0;
// }
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
    vector<vector<ll> > mat(n, vector<ll>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    // vector<ll> rd(n+m-1,0);
    // vector<vector<ll> > ld(2,vector<ll>((n+m)/2,0));
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         rd[i+j]++;
    //         if(i>=j){
    //             ld[1][i-j]++;
    //         }
    //         if(j>=i){
    //             ld[0][j-i];
    //         }
    //     }
    // }
    ll ans = 0; 
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         ll r = rd[i+j] ,l;
    //         if(i>j){
    //             ld[1][i-j];
    //         }else{
    //             ld[0][j-i];
    //         }
    //         ans = max(ans,r+l-mat[i][j]);
    //     }
    // }
    cout<<ans; 
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}