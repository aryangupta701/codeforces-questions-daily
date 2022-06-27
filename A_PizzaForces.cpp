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
     ll n; cin>>n; 
     ll ans = 0,x=n%10, y = n/10; 
     if(n<10){
        if(n<=6) ans = 15; 
        else if(n<=8) ans = 20; 
        else ans = 25;
        cout<<ans; 
        return;
     }
     switch(x){
        case 0 : ans = 25*y; break;
        case 1 : ans = 25*(y-1) + 30; break;
        case 2 : ans = 25*(y-1) + 30; break;
        case 3 : ans = 25*(y-1) + 35; break;
        case 4 : ans = 25*(y-1) + 35; break;
        case 5 : ans = 25*(y-1) + 40; break;
        case 6 : ans = 25*(y-1) + 40; break;
        case 7 : ans = 25*(y-1) + 45; break;
        case 8 : ans = 25*(y-1) + 45; break;
        default : ans = 25*(y+1);
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