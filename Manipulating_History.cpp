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
    ll n; 
    cin>>n; 
    n *= 2;
    vector<string> v(n+1);
    vector<string> singleChar;
    vector<ll> count(26,0);
    for(ll i=0; i<=n; i++){
        cin>>v[i];
    } 
    for(ll i=0; i<=n; i++){
        if(v[i].length() == 1 && i<n) {
            singleChar.push_back(v[i]);
        }
        for(ll j=0; j<v[i].length(); j++){
            count[v[i][j]-'a']++;
        }
    }
    ll size = singleChar.size();
    for(ll i =0 ;i<size; i++){
        if(count[singleChar[i][0]-'a']%2 == 1){
            cout<<singleChar[i][0];
            return;
        }
    }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}