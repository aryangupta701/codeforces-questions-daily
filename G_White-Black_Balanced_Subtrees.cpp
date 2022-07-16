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
class Node{
    public: 
    ll white,black; 
    Node(){
        white = 0; 
        black = 0;
    }
    Node(ll n, ll m){
        white = n; 
        black = m;
    }
};
string s; 
ll ans = 0;

Node solve(ll sv,vector<vector<ll>>& adj){
    Node curr;
    for(auto it: adj[sv]){
        Node temp = solve(it,adj);
        if(temp.white == temp.black) ans++;
        curr.white += temp.white; 
        curr.black += temp.black;
    }
    if(s[sv-1] == 'W'){
        curr.white++;
    }
    else curr.black++;
    return curr;
}
void fun(){
     ll n; cin>>n; 
     vector<vector<ll>> adj(n+1);
     ll root = 1; 
     for(ll i=0; i<n-1; i++){
        ll x;
        cin>>x; 
        adj[x].push_back(i+2);
     }
     cin>>s; 
     ans = 0;
     Node t = solve(root,adj);
     if(t.white == t.black) ans++;
     cout<<ans;
     
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}