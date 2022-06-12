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

class Node{
    public: 
    Node* left;
    Node* right;
    ll val; 
    Node(ll v){
        val = v;
        left = NULL; 
        right = NULL;
    }
};

Node* constructTree(vector<vector<ll> >&g , ll curr, ll par){
    bool flag = true;
    Node* temp = new Node(curr);
    for(int i=0; i<g[curr].size(); i++){
        if(g[curr][i] == par) continue;
        if(flag){
            temp->left = constructTree(g,g[curr][i],curr);
            flag = false;
        }
        else {
            temp->right = constructTree(g,g[curr][i],curr);
            break;
        }
    }
    return temp;
}

ll calc(Node* root,map<Node*,ll>& mp ){
    if(root == NULL) return 0; 
    if(mp.find(root) != mp.end()) return mp[root];
    return mp[root] =  1 + calc(root->left,mp) + calc(root->right,mp);
}

ll height(Node* root, map<Node*,ll>& ht){
    if(root == NULL) return 0; 
    if(ht.find(root) != ht.end()) return ht[root];
    return ht[root] =  1+ max(height(root->left,ht), height(root->right,ht));
}

void fun(){
     ll n; 
     cin>>n;
     vector<vector<ll> > g(n+1);
     for(int i=0; i<n-1; i++){
        ll u,v; 
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
     }
     Node *root = NULL; 
     root = constructTree(g,1,-1);
     Node* temp = root; 
     ll ans = 0;
     queue  <pair<Node*,ll> > q;
     map<Node*,ll> mp,ht; 
     q.push({root,ans});
     while(!q.empty()){
        auto f = q.front();
        ans = max(ans,f.second);
        q.pop();
        if(f.first == NULL) continue;

        ll left = calc(f.first->left,mp);
        ll right = calc(f.first->right,mp);
        
        if(left > 0 ){
            q.push({f.first->right,f.second+left-1});
        }
        if(right>0){
            q.push({f.first->left,f.second+right-1});
        }
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