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

bool lexo(vector<ll>& a, vector<ll>& b,ll n){
    for(int i=0; i<n; i++){
        if(b[i]>a[i]) return false;
        if(a[i]>b[i]) return true;
    }
    return false;
}

void fun(){
    ll n; cin>>n; 
    vector<ll> v(n),ans(n),t(n);
    for(ll i=0; i<n ;i++) {
        cin>>v[i];
        ans[i] = v[i];
        t[i] = v[i];
    }
    sort(ans.begin(),ans.end());
      
    ll i=0;
    while(ans[i] == v[i]) i++;
    if(i==n) {
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    ll x = i;
    vector<ll> y; 
    ll mn = ans[i];
    for(i=x; i<n; i++){
        if(v[i]==mn){
            y.push_back(i);
        }
    }
    ll len = y.size();
    for(ll j=0; j<len; j++) {
        reverse(v.begin()+x,v.begin()+y[j]+1);
        if(lexo(t,v,n)){
            t=v;
        }
        reverse(v.begin()+x,v.begin()+y[j]+1);
    }


    for(i=0; i<n; i++){
        cout<<t[i]<<" ";
    }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}



// for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         reverse(v.begin()+i,v.begin()+j+1);
    //         if(lexo(ans,v,n)){
    //             ans = v;
    //         }
    //         reverse(v.begin()+i,v.begin()+j+1);
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     cout<<ans[i]<<" ";
    // }