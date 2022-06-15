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
    ll n; cin>>n; 
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<ll> rem(n+1);
    rem[0] = 0;
    for(int i=1; i<=n; i++){
        rem[i] = abs((rem[i-1] + v[i-1])%n);
    }
    map<ll,ll> m; 
    for(int i=0; i<=n; i++){
        if(m.find(rem[i]) == m.end()){
            m[rem[i]] = -1; 
        }
        else {
            if(m[rem[i]] == -1){
                m[rem[i]] = i;
            }
        }
    }
    for(int i=0; i<=n; i++){
        if(m.find(rem[i])!=m.end() && m[rem[i]] != -1){
            cout<<m[rem[i]]-i<<endl; 
            for(int j=i+1; j<=m[rem[i]]; j++){
                cout<<j<<" ";
            }
            return;
        }
    }
    cout<<-1;

}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}