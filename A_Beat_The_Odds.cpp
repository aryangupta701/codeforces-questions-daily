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



void fun(){
    int n; 
    cin>>n;
    vi arr(n);  
    int evenCount=0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2 == 0) evenCount++;
    }
    int oddCount = n-evenCount; 
    cout<<min(oddCount,evenCount);
}

signed main() {
       fastio();
       int TC = 1;
       cin>>TC;
       while(TC--)fun(),cout<<"\n";
       return 0;
}