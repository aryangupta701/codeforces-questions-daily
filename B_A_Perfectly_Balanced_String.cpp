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
     ll n = s.length();
     bool flag = true;
     set<char> st;
     for(int i=0; i<n; i++){ 
         if(st.find(s[i]) == st.end())   
         st.insert(s[i]);
     }
     ll size = st.size();
     if(size == 1){
         yes 
         return;
     }
     string t = s.substr(0,size);
     ll i = size; 
     while(i<=n-size){
         if(t!=s.substr(i,size)){
             no 
             return;
         }
         i+=size;
     }

     if(i > n-size){
        int x = n-i;
        if(t.substr(0,x) != s.substr(i)){
            no
            return;
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