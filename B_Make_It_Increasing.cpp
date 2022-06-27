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
     ll n; cin>> n ; 
     vector<ll> v(n);
     for(ll i=0; i<n; i++) cin>>v[i];
     ll ans = 0;
     if(n==1) {
        cout<<0; 
        return;
     }
     while(1){
        for(int i=0; i<n-1; i++){
            if((v[i] == 0 && v[i+1] == 0) || v[i]<i || v[i+1]<i+1) {
                cout<<-1 ;
                return;
            }
            if(i==(n-2) && v[i]<v[i+1]){
                cout<<ans; 
                return;
            }
            bool flag = false;
            while(v[i]>=v[i+1]){
                v[i] /= 2;
                ans ++;
                flag = true;
            }
            if(flag) break;
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