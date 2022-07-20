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
     ll n,q; 
     cin>>n>>q; 
     vector<ll> v(n),bad;
     for(ll i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]>q){
            bad.push_back(i);
        }
    }
    ll low = 0 , high = (int) bad.size()-1;
    // cout<<high;
    ll ans = n; 
    while(low<=high){
        ll mid = low + (high-low)/2;
        bool flag = true;
        ll iq = q; 
        // cout<<bad[mid];
        for(ll i=bad[mid]; i<n; i++){
            if(iq == 0){
                flag = false;
                break;
            }
            if(v[i]>iq){
                iq--;
            }
        }
        if(flag){
            ans = bad[mid]; 
            high = mid-1; 
        }
        else low = mid+1;
    }
    // cout<<ans;
    for(ll i=0; i<ans; i++){
        if(v[i]<=q){
            cout<<"1";
        }
        else cout<<"0";
    }
    for(ll i=ans; i<n; i++){
        cout<<"1";
    }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}