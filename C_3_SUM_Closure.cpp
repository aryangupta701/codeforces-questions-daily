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
     ll n; cin>>n; 
     vector<ll> v(n); 
     for(ll i=0; i<n; i++) cin>>v[i];
     if(n<10){
        set<ll> st; 
        for(int i=0; i<n; i++){
            st.insert(v[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(st.find(v[i]+v[j]+v[k]) == st.end()){
                        no return ;
                    }
                }
            }
        }
        yes return ;
     }
     vector<ll> temp; 
     for(ll i=0; i<n; i++){
        if(v[i]!=0){
            temp.push_back(v[i]);
        }
     }
     if(temp.size()==0 || temp.size()==1){
        yes return ;
     }
     else if(temp.size()==2){
        if(temp[0]+temp[1] == 0) {
            yes
        }else no 
        return ;
     }
     else {
        no return;
     }
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}