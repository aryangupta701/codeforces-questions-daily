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
     map<string,int> mp; 
     int c = 1;
     for(int i=0; i<26; i++){
        char a = 'a'+i;
        for(int j=0 ; j<26; j++){
            if(i == j) continue; 
            char b = 'a'+j;
            string s = "";
            s+=a;
            s+=b;
            mp[s]=c;
            c++;
        }
     }
     ll t; 
     cin>>t; 
     while(t--){
        string s; 
        cin>>s; 
        cout<<mp[s]<<endl;
     }
}

signed main() {
       fastio();
       fun();
       return 0;
}