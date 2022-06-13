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
     ll n,q; 
     cin>>n>>q; 
     vector<ll> prices(n);
     for(int i=0; i<n; i++) cin>>prices[i];
     sort(prices.begin(), prices.end());
     reverse(prices.begin(), prices.end());
     for(int i=1; i<n; i++){
        prices[i] += prices[i-1];
     }
     prices.insert(prices.begin(),0);
     while(q--){
        ll x,y;
        cin>>x>>y;
        cout<<prices[x]-prices[x-y]<<endl;
     }
  
}

signed main() {
       fastio();
    //    int TC = 1;
    //    cin>>TC;
    //    while(TC--)fun(),cout<<"\n";
    //    return 0;
    fun();
    return 0;
}