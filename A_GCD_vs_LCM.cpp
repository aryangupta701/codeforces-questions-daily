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
string reverse(string s , ll n=-1){
    if(n==-1){
        n = s.length();
    }
   for(int i=0; i<n/2; i++){
      char t = s[i];
      s[i] = s[n-i-1];
      s[n-i-1] = t;
   }
   return s;
}

ll gcd(ll a, ll b){
    if( a == 0) return b; 
    return gcd(b%a,a);
}

void fun(){
     ll n; 
     cin>>n; 
    //  n -= 2; 
    //  ll a,b; 
    //  if(n==2){
    //     a = 1; 
    //     b = 1;
    //  }
    //  else if(n==3){
    //     a = 2; 
    //     b = 1;
    //  }
    //  else {
    //     for(ll i=2; i<n; i++){
    //         if(gcd(i,n-i) == 1){
    //             a = i; 
    //             b = n-i;
    //             break;
    //         }
    //     }
    //  }
     cout<<n-3<<" "<<1<<" "<<1<<" "<<1; 
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}