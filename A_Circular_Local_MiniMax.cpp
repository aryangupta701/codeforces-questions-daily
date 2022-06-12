#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
void solve(vector<int> arr, int size, vector<vector<int> >& ans){
    sort(arr.begin(), arr.end());
    int j=0; 
    vector<int> temp(size);
    for(int i=0; i<size; i+=2){
        temp[i] = arr[j++];
    }
    for(int i=1; i<size; i+=2){
        temp[i] = arr[j++];
    }
    for(int i=0; i<size; i++){
        if( (temp[i] > temp[(i+1)%size]) && (temp[i] > temp[!i? size-1 : i-1])) continue; 
        else if( (temp[i] < temp[(i+1)%size]) && (temp[i] < temp[!i? size-1 : i-1]) ) continue;
        ans.push_back({});
        return ;
    }
    ans.push_back(temp);
}

 int main(){
     int n; 
     cin>> n; 
     int t = n;
     vector<vector<int> > ans;
     while(t--){
         int size; 
         cin>>size; 
         vector<int> v(size);
         for(int i=0; i<size; i++){
             cin>>v[i];
         }
         if(size%2){
             ans.push_back({});
         }
         else solve(v,size,ans);
     }
     
     for(int i=0; i<n; i++){
         if(ans[i].size() == 0) cout<<"NO"<<endl;
         else{
             cout<<"YES"<<endl;
             for(auto it : ans[i]){
                 cout<<it<<" ";
             }
             cout<<endl;
         }
     }
 }