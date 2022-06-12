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

long long cal(string s , int n){
    long long ans = 0;
    for(int i=0; i<n-1; i++){
        if(s[i] == '0' && s[i+1] == '1'){
            ans += 1; 
        }
        else if(s[i] == '1' && s[i+1] == '0'){
            ans+=10; 
        }
        else if(s[i] == '1' && s[i+1] == '1'){
            ans+=11;
        }
    }
    return ans;
}

void fun(){
    ll n, k;
    cin>>n>>k;
    int count = 0;
    string s; 
    cin>>s; 

    if(s.length()==1) {
        cout<<cal(s,1);
        return ;
    }

    for(ll i=n-1; i>=0 ; i--){
        if(s[i] == '1'){
            if(k>=(n-i-1)){
                s[i] = '0';
                s[n-1] = '1';
                k -= n-i-1;
            }
            break;
        }
    }

    for(ll i=0; i<n-1; i++){
        if(s[i] == '1'){
            if(k>=i){
                s[i] = '0';
                s[0] = '1';
            }
            break;
        }
    }

    cout<<cal(s,n);
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}