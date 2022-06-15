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


void fun(){
     bool evenPos, oddPos; 
    ll n; cin>>n; 
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i+=2){
        if(i==0 ){
            if(arr[i]%2==1)
            evenPos = true;
            else evenPos = false;
            continue;
        }
        if(arr[i]%2==1 && !evenPos){
            no return;
        }
        if(arr[i]%2==0 && evenPos){
            no return;
        }
    }
    for(int i=1; i<n; i+=2){
        if(i==1 ){
            if(arr[i]%2==1)
            oddPos = true;
            else oddPos = false;
            continue;
        }
        if(arr[i]%2==1 && !oddPos){
            no return;
        }
        if(arr[i]%2==0 && oddPos){
            no return;
        }
    }
    yes
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}