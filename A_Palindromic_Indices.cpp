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
     ll len ;
     cin>>len;
     cin>>s; 
     char t1 , t2;
     if(len%2==0){
        t1 = s[len/2-1];
        t2 = s[len/2];
     }
     else {
         t1 = t2 = s[len/2];
     }
     ll ans = 0;
    for(int i =len/2-1; i>=0; i--){
        if(t1==s[i]) ans++; 
        else break;
    }
    for(int i = len/2; i<len; i++){
        if(t2==s[i]) ans++; 
        else break;
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