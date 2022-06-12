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
     vector<string> v(n);
     for(int i=0; i<n; i++) cin>>v[i];
     map<char,ll> firstPos; 
     map<char,ll> secondPos; 
     map<string,ll> stringCount; 

     for(int i=0; i<n; i++){
         firstPos[v[i][0]]++; 
         secondPos[v[i][1]]++; 
         stringCount[v[i]]++;
     }
    ll ans = 0; 
    for(auto it : firstPos){
        if(it.second > 1)
        ans += ((it.second-1)*it.second)/2;
    }
    for(auto it : secondPos){
        if(it.second > 1)
        ans += ((it.second-1)*it.second)/2;
    }
    for(auto it : stringCount){
        if(it.second > 1)
        ans -= ((it.second-1)*it.second);
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