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
    ll x1,p1,x2,p2; cin>>x1>>p1>>x2>>p2; 
    ll n1=0,n2=0; 
    ll temp1 = x1,temp2 = x2;
    while(x1){
        x1 /= 10; 
        n1++;
    }
    while(x2){
        n2++; 
        x2 /= 10;
     }
    if(n1>n2){
        if(p2>=(n1-n2)){
            p2 -= (n1-n2);
            temp2 *= power(10,n1-n2);
        }
        else {
            cout<<">"; return;
        }
    }
    if(n2>n1){
        if(p1>=(n2-n1)){
            p1 -= (n2-n1);
            temp1 *= power(10,n2-n1);
        }
        else {
            cout<<"<"; return;
        }
    }
    if(p1>p2){
        cout<<">";
    }
    else if(p2>p1){
        cout<<"<";
    }
    else if(temp1>temp2){
        cout<<">";
    }
    else if(temp1<temp2){
        cout<<"<";
    }
    else cout<<"=";
    return;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}