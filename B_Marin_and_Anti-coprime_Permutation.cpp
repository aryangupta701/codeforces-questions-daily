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
bool isPrime[1000000];

void calculatePrimes(ll n){
    for(ll i=0; i<=n; i++) isPrime[i] = true;
    isPrime[0] = false; 
    isPrime[1] = false;
    isPrime[2] = false;
    for(ll i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(ll j=i*i; j*i<=n; j+=i){
                isPrime[i] = false;
            }
        }
    }
}
 

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

ll fact(ll n){
    ll mod = 998244353;
    ll f = 1;
    for(ll i=2; i<=n; i++){
        f = (f*i)%mod;
    }
    return f;
}

void fun(){
    ll n; cin>>n; 
    ll ones = 0;
    if(n%2 ==1){
        cout<<0; 
        return;
    }
    ll mod = 998244353;
    ll ans = fact(n/2); 
    ans = (ans*ans)%mod; 
    cout<<ans;  

}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       calculatePrimes(1001);
       while(TC--)fun(),cout<<"\n";
       return 0;
}