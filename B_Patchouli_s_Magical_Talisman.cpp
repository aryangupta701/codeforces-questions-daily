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
     ll n; 
     cin>>n; 
     ll oddcount = 0,evencount = 0;
     vector<ll> v(n);
     vector<ll> m;
     for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2==0) {
            evencount++;
        }
        else oddcount++;
     } 
     ll ans = 0; 
     if(evencount <= oddcount){
        cout<<evencount;
        return;
     }
    ans += oddcount;
    evencount = evencount-oddcount;
    for(int i=0 ;i<n; i++){
        if(v[i]%2 == 1) continue;
        int x = 1; 
            while(!((v[i]>>x) & 1)){
                x++;
            }
        m.push_back(x);
    }
    sort(m.begin(), m.end());
    ll i=0;
    ll c = 0;
    while((evencount-i-c)>0){
        ll a = m[i];
        ans += m[i];
        ll pieces = 1<<a; 
        c+=pieces;
        i++;
    }
    ans += evencount-i;
    cout<<ans;
    // cout<<0;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}