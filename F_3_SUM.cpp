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
    vector<ll> rem(10,0);
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        rem[v[i]%10]++;
    }
    for(int i=0; i<10; i++){
        if(rem[i]>0){
            rem[i]--;
            for(int j=i; j<10; j++){
                if(rem[j]>0){
                    rem[j]--;
                    for(int k=j; k<10; k++){
                        if(rem[k]>0){
                            if((i+j+k)%10 == 3) {
                                yes return;
                            }
                        }
                    }
                    rem[j]++;
                }
                
            }
            rem[i]++;
        }
    }
    no return;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}