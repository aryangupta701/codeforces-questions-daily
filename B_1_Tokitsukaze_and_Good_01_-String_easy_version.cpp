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
     string s; 
     cin>>n>>s; 
     ll ans = 0; 
     vector<ll> v; 
     for(ll i=0; i<n ; i++){
        ll j=i , c=0; 
        while(j<n && s[i]==s[j]){
            c++; 
            j++;
        }
        i = j-1; 
        v.push_back(c);
     }


     n = v.size();
     for(ll i=0; i<n; i++){
         if(v[i]%2 == 0) continue; 
         int c = 1;
         i++;
         while(i<n && v[i]%2 == 0)
         {
             i++,c++;
         }
         ans += c; 
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