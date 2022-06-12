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
    ll n,m,k; 
    cin>>n>>m>>k;
    string a,b,c=""; 
    cin>>a>>b; 
    priority_queue<char,vector<char>,greater<char> > pq1,pq2;
    bool flag = true;
    for(int i=0; i<n; i++) pq1.push(a[i]);
    for(int i=0; i<m; i++) pq2.push(b[i]);
    ll count=0;
    while(!pq1.empty() && !pq2.empty()){
        while((!pq1.empty()) && count<k ){
        char a1 = pq1.top(), a2 = pq2.top();
        ll x1 = a1, x2 = a2; 
        if(x1>x2){
            break;
        }
        pq1.pop();
        c += a1;
        count++;
       }
       if(pq1.empty()) break;
       c += pq2.top();
       pq2.pop();
       count = 1;
       while((!pq2.empty()) && count<k ){
        char a1 = pq1.top(), a2 = pq2.top();
        ll x1 = a1, x2 = a2; 
        if(x2>x1){
            break;
        }
        pq2.pop();
        c += a2;
        count++;
       }
        if(pq2.empty()) break;
       c += pq1.top();
       pq1.pop();
       count = 1;
    }
    cout<<c; 
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}