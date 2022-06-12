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

ll cost(string a, string b, int m){
    ll c = 0; 
    for(int i=0; i<m ;i++){
        c += abs((int)a[i]-(int)b[i]);
    }
    return c;
}

void fun(){
    int n,m; 
    cin>>n>>m;
    vector<string> s(n); 
    for(int i=0; i<n; i++) cin>>s[i];
    
    // sort(s.begin(), s.end());
    ll minCost = INT_MAX;
    for(int i=0; i<n-1 ;i++){
        for(int j=i+1; j<n; j++){
            minCost = min(minCost, cost(s[i],s[j],m));
        }
    }
    cout<<minCost;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}