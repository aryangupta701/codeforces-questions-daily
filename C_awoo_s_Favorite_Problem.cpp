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
    string s,t; 
    cin>>s>>t; 
    int c=0;
    string temp1="",temp2="";
    for(int i=0; i<n; i++){
        if(s[i] != 'b'){
            temp1 += s[i];
        }
        if(t[i] != 'b'){
            temp2 += t[i];
        }
    }
    if(temp1 != temp2) {
        no return;
    }
    for(int i=0; i<n; i++){
        if(s[i] == 'a'){
            c++;
        }
        if(t[i] == 'a'){
            c--;
        }
        if(c<0){
            no return;
        }
    }
    if(c!=0) {
        no return;
    }
    c=0;
    for(int i=0; i<n; i++){
        if(t[i] == 'c'){
            c++;
        }
        if(s[i] == 'c'){
            c--;
        }
        if(c<0){
            no return;
        }
    }
    if(c!=0){
        no return;
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