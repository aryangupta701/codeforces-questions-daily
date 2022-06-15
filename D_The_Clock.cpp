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

bool palindrome(string s){
    string rev = "";

    for(int i=4; i>=0; i--){
        rev += s[i];
    }
    if(rev == s){
        return true;
    }
    return false;
}

string addTime(string temp, ll t){
    ll hours = t/60; 
    ll mins = t%60;
    ll currHours = stoi(temp.substr(0,2));
    ll currMins = stoi(temp.substr(3));
    currHours = currHours+hours;
    if((currMins + mins) >= 60) currHours++;
    currHours %= 24;
    currMins = (currMins + mins) % 60; 

    string a = to_string(currHours);
    string b = to_string(currMins);
    if(a.length() == 1){
        a = '0' + a;
    }
    if(b.length() == 1){
        b = '0' + b;
    }
    return a+':'+b;
}

void fun(){
     string s; 
     ll t,ans=0;
     cin>>s>>t; 
     string temp = s;
     do{
        if(palindrome(temp)) ans++; 
        temp = addTime(temp,t);
     }while(temp!=s);
     cout<<ans; 
     return;
}
signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}