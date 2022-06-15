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

int lenOfLongSubarr(vector<ll> A, ll N, ll K)
{
 
    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;
   
    while (j < N) {
        sum += A[j];
        if (sum < K) {
            j++;
        }
        else if (sum == K) {
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        else if (sum > K) {
            while (sum > K) {
                sum -= A[i];
                 i++;
            }
              if(sum == K){
              maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    return maxLen;
}


void fun(){
     ll n,sum,s=0;
     cin>>n>>sum; 
     vector<ll> v(n); 
     for(int i=0; i<n ;i++){
        cin>>v[i];
        s += v[i];
     }
     if(s<sum){
        cout<<-1;
        return;
     }
     cout<<n-lenOfLongSubarr(v,n,sum);
     
     return ;
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}