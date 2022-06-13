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
     ll c = 0,len=s.length(); 
     for(int i=0; i<len; i++){
        if(s[i] == 'A') c++;
        else c--; 
        if(c<0) {
            no return;
        }
     }

     for(int i=len-1; i>=0; i--){
        if(s[i] == 'A'){
            no return;
        } 
        else break;
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