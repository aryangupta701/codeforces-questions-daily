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
     string s; 
     cin>>s; 
     ll len = s.length();
     if(len == 1){
        cout<<"Bob "<<(int)(s[0]-96);
        return;
     }
     cout<<"Alice ";
     ll ans = 0;
     for(int i=0; i<len; i++){
        ans += (s[i]-96);
     }
     if(len%2 == 0) {
        cout<<ans;
        return;
     }
     int a = s[0]; 
     int b = s[len-1];
     if(a < b){
        cout<<ans-2*(s[0]-96);
     }
     else cout<<ans-2*(s[len-1]-96);
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}