#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
 int main(){
     int n; 
     cin>> n; 
     int t = n; 
     vector<vector<long long> > ans;
     while(t--){
         long long a,b,c; 
         cin>>a>>b>>c; 
         long long x = b+c+a-((b+c)%b);
         ans.push_back({x,b,c});
     }
     for(int i=0; i<n; i++){
         for(int j=0; j<3; j++){
             cout<<ans[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
 }