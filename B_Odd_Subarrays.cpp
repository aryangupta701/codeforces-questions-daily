#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
int solve(vector<int>& arr, int n){
    int count = 0; 
    int mx = INT_MIN;
    for(int i=0; i<n-1; i++){
        mx = max(mx,arr[i]);
        if(mx > arr[i+1]){
            mx = INT_MIN;
            i++;
            count++;
        }
    }
    return count;
}

 int main(){
     int n; 
     cin>> n; 
     int t = n; 
     vector<int> ans;
     while(t--){
         int size; 
         cin>>size; 
         vector<int> arr(size);
         for(int i=0; i<size; i++){
             cin>>arr[i];
         }
         ans.push_back(solve(arr,size));
     }
     for(int i=0; i<n; i++){
         cout<<ans[i]<<endl;
     }
 }