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
     vector<ll> v(n);
     for(int i=0; i<n; i++) cin>>v[i];
     ll count = 0; 
     bool flag = false;
     for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]){
            count++;
        }
     }
     ll c = 0;
     for(int i=0; i<n-1; i++){
        if(v[i] == v[i-1]){
            c++;
        }
        else {
            if( c>0 && c<count){
                flag = true;
            }
        }
     }
     if(count <= 1) {
        cout<<0; 
        return;
     }
     if(!flag && count<=2){
        cout<<1;
        return;
     }
     
     if(!flag){
        cout<<count-2;
        return;
     }
     ll r,l;
     for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]){
            l = i+1; break;
        }
     }
     for(int i=n-1; i>0; i--){
        if(v[i] == v[i-1]){
            r = i-1;
            break;
        }
     }
     cout<<r-l;    
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}