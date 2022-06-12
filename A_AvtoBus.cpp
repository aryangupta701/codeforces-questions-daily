#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
 int main(){
     int n; 
     cin>> n; 
     int t=n;
     vector<vector<long long> > ans;
     while(t--){
        long long num;
        cin>>num;
        if(num%2 == 1 || num<4){
            ans.push_back({-1});
            continue;
        }
        long long max = num/4; 
        long long min = num/6; 
        long long minRem = num%6;
        if(minRem) min++;
        ans.push_back({min,max});
    }

     for(int i=0; i<n; i++){
         if(ans[i].size() == 2)
         cout<<ans[i][0]<<" "<<ans[i][1];
         else cout<<ans[i][0];
         cout<<endl;
     }
 }