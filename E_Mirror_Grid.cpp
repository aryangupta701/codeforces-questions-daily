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
     vector<string> v(n);
     for(ll i=0; i<n; i++){
       cin>>v[i];
     } 
     vector<ll> diag(n/2+1,0);
     ll len = (n-1)/2;
     vector<ll> sides(len, 0);
 
     for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(i==j || (i+j+1)==n){
                ll idx ; 
                if(i<=n/2){
                    idx = i;
                }
                else idx = (n-i)-1;

                if(v[i][j] == '1')
                diag[idx] ++;
                continue;
            }
            ll idx ; 
            idx = min(min(i,j),n-max(i,j)-1);
            if(v[i][j] == '1')
            sides[idx] ++;
        }
     }
    
     ll ans = 0; 
     for(ll i=0; i<n/2; i++){
        cout<<diag[i]<<" ";
        ans += min(4-(diag[i]), diag[i]);
     }
     cout<<endl;
     for(ll i=0; i<len; i++){
        cout<<sides[i]<<" ";
        ans += min(sides[i], 4*(n-(i+1)*2)-sides[i]);
     }
     cout<<endl;
     cout<<ans;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}