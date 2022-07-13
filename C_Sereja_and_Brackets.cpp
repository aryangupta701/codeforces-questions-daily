#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


struct Node{
    ll open;
    ll close; 
    ll full;
    Node(){
        open = 0;
        close = 0;
        full = 0;
    }
};

class SEGtree{
    public:
    vector<Node> seg;
    SEGtree(ll n){
        seg.resize(4 * n + 1);
    }
    void build(ll idx , ll low , ll high , string s){
        if(low == high){
            if(s[low] == '('){
                seg[idx].open = 1;
            }
            else {
                seg[idx].close = 1;
            }
            seg[idx].full = 0;
            return ;
        }

        ll mid = low + (high-low)/2; 
        ll left = idx * 2 + 1; 
        ll right = idx * 2 + 2;
        build(left , low , mid , s);
        build(right , mid+1 , high , s);
        ll match = min(seg[left].open, seg[right].close);
        seg[idx].full = seg[left].full + seg[right].full + match;
        seg[idx].open = seg[left].open + seg[right].open - match;
        seg[idx].close = seg[left].close + seg[right].close - match;
    }
    Node query(ll idx, ll low, ll  high, ll l ,ll r){
        // no overlap 
        // low high l r or l r low high 
        if(high<l || low>r){ 
            return Node();
        }
        // complete overlap 
        // l low high r
        if(low>=l && high <= r){
            return seg[idx];
        }

        ll mid = low + (high-low)/2;
        Node left = query(idx * 2 + 1, low, mid , l , r);
        Node right = query(idx * 2 + 2, mid+1, high, l , r);
        Node ans;
        ll match = min(left.open,right.close);
        ans.full = left.full + right.full + match ; 
        ans.open = left.open + right.open - match;
        ans.close = left.close + right.close - match;
        return ans;
    }
};


void fun(){
    string s; cin>>s; 
    ll size = s.length();
    ll n; cin>>n; 
    SEGtree seg1(size); 
    seg1.build(0,0,size-1,s);
    while(n--){
        ll l,r;
        cin>>l>>r; 
        Node ans = seg1.query(0,0,size-1,l-1,r-1);
        cout<<ans.full*2<<endl;
    }
}

int main() {
       fun();
       return 0;
}