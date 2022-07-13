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

class SEGtree {
    public:
    vector<ll> seg;
    ll size ;
    SEGtree(ll n){
        size = (1<<n)-1;
        seg.resize(size);
    }
    void build(ll idx, bool isOr, vector<ll>& arr){
        if(idx>=(size/2)){
            seg[idx] = arr[idx-(size/2)]; 
            return ;
        }
        build(idx*2+1,!isOr,arr);
        build(idx*2+2,!isOr,arr);
        if(isOr){
            seg[idx] = seg[idx*2+1] | seg[idx*2+2];
        }
        else {
            seg[idx] = seg[idx*2+1] ^ seg[idx*2+2];
        }
    }

    void update(ll i, ll val){
        ll idx = size/2 + i; 
        seg[idx] = val; 
        bool isOr = true;
        while(idx != 0){
            idx = (idx-1)/2; 
            if(isOr)
                seg[idx] = seg[idx*2+1] | seg[idx*2+2];
            else 
                seg[idx] = seg[idx*2+1] ^ seg[idx*2+2];
            isOr = !isOr;
        }
    }
};

void fun(){
    ll n,q; cin>>n>>q;
    SEGtree seg1(n+1);
    ll len = (1<<n);
    vector<ll> v(len);
    for(ll i=0; i<len; i++) cin>>v[i];
    bool start = (n%2==1);
    seg1.build(0,start,v);
    while(q--){
        ll i,val; 
        cin>>i>>val; 
        seg1.update(i-1,val);
        cout<<seg1.seg[0]<<endl;
    }
    
}

signed main() {
       fastio();
       fun();
       return 0;
}