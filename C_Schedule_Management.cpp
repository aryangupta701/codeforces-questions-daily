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

bool check(vector<ll>& v, int x, int n){
    ll left=0, extra=0; 
    for(ll i=0; i<n; i++){
        int temp = abs(v[i]-x);
        if(x<v[i]) left += temp; 
        if(x>v[i]) extra += temp/2;
    }
    if(extra>=left){
        return true; 
    }
    return false;
}

void fun(){
     ll n,m; cin>>n>>m;
     vector<ll> task(m),v(n,0);
     for(ll i=0; i<m; i++) cin>>task[i];
     for(ll i=0; i<m; i++){
        v[task[i]-1]++;
     }
     ll low = 0 , high = 1e9, mid; 
     while(low<=high){
        if(low == high){
            cout<<low;return ;
        }
        mid = low + (high-low)/2; 
        if(check(v,mid,n)){
            high = mid; 
        }
        else low = mid+1;
     }
    // if(check(v,50,n)){
    //     cout<<"hello";
    // }
    //  cout<<low; 
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}