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
#define REP(i,n) for (int i = 0; i<n; i++)
#define matrix vector<vector<ll> >
ll mod = 1e9;
 
matrix mulMat(matrix mat1, matrix mat2) {
    ll R1 = mat1.size(),C1=mat1[0].size(),R2= mat2.size(),C2=mat2[0].size(); 
    matrix rslt(R1,vector<ll>(C2));
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                rslt[i][j] = (rslt[i][j] + mat1[i][k] * mat2[k][j])%mod;
            }
        }
    }
    return rslt;
}
matrix power(matrix x, ll y)
{   
    if(y==1) return x; 
    if(y%2 == 1){
        return mulMat(x,power(x,y-1));
    }
    matrix temp = power(x,y/2);
    return mulMat(temp,temp);
}
 
 
void fun(){
     ll k; 
     cin>>k; 
     vector<ll> b(k),c(k);
     matrix f1(k,vector<ll>(1));
 
     for(int i=0; i<k ; i++){
         cin>>b[i];
         f1[i][0] = b[i];
     }
     for(int i=0; i<k ; i++)cin>>c[i];
    ll n;
    cin>>n; 
    matrix mat(k,vector<ll> (k,0));
    for(int i=0; i<k ;i++){
        mat[k-1][i] = c[k-1-i];
    }
    for(int i=0; i<k-1; i++){
        mat[i][i+1] = 1;
    }
    matrix t = power(mat,n-1);
    matrix ans = mulMat(t,f1);
    cout<<ans[0][0];
}
 
signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
} 