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

ll calcUpperBound(vector<ll>& v, ll cost , ll day, ll& n){
    ll high = n-1, low=0; 
    while(low<=high){
        ll mid = low+(high-low)/2;
        ll val = v[mid] + (mid+1)*day ;
        if(val == cost){
            n =  mid+1;
            return mid+1; 
        }
        else if(val < cost){
            low = mid+1; 
        }
        else high = mid-1;
    }
    return n = low;
}

void fun(){
     ll n,c; 
     cin>>n>>c; 
     vector<ll> v(n);
     for(int i=0; i<n; i++) cin>>v[i];
     sort(v.begin(), v.end());
     for(int i=1 ;i<n;i++){
         v[i] += v[i-1];
     }
     ll day = 0,ans=0;
     ll possibleDays = c-v[0]+1;
     while(possibleDays>day){
         ll temp , idx = calcUpperBound(v,c,day,n);
         temp = (c-v[idx-1])/idx+1 - day;
         ans += temp*(idx);
         day += temp;
     }
     cout<<ans;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}