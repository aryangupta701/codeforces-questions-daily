class SEGtree {
    public:
    vector<ll> seg;
    SEGtree(ll n){
        seg.resize(4*n+1);
    }
    void build(ll idx, ll low, ll high, vector<ll>& arr){
        if(low == high){
            seg[idx] = arr[low]; 
            return ;
        }
        int mid = low + (high-low)/2; 
        build(idx*2+1,low,mid,arr);
        build(idx*2+2,mid+1,high,arr);
        seg[idx] = min(seg[idx*2+1], seg[idx*2+2]);
    }

    void update( ll idx,ll low, ll high,ll i, ll val){
        if(low == high){
            seg[idx] = val;
            return ;
        }
        ll mid = low + (high-low)/2; 
        if(i<=mid){
            update(idx*2+1,low,mid,i,val);
        }
        else {
            update(idx*2+2,mid+1,high,i,val);
        }
        seg[idx] = min(seg[idx*2+1], seg[idx*2+2]);
    }

    ll query( ll idx, ll low, ll high ,ll l , ll r ){
        //no overlap  
        // l r low high or low high l r
        if(r<low || l>high){
            return INT_MAX; 
        }
        //complete overlap 
        // l low high r
        if(low>=l && r>=high){
            return seg[idx];
        }
        ll mid = low + (high-low)/2;
        ll left = query(2*idx+1,low,mid,l,r);
        ll right = query(2*idx+2,mid+1,high,l,r);
        return min(left,right);
    }
};