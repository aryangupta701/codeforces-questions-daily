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
    string s;
    cin>>s;
    ll ans=0; 
    ll n = s.length();
    ll zeroPos=n-1,lastOne=0;
    
    
    for(ll i=0; i<n; i++){
        if(s[i] == '0'){
            zeroPos = i;
            break;
        }
        else if(s[i] == '1'){
            lastOne = i; 
        }
    }

    cout<<zeroPos-lastOne+1; 
    
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}