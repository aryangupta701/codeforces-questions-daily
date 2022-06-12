#include<bits/stdc++.h>
using namespace std;

#define fin for(int i=0;i<n;i++)

void solve(int n , vector<double> arr, vector<string>& ans){
    // sort(arr.begin(), arr.end());
    int sum = 0;
    // if(n%2 == 0){
    //     for(int i=0; i<n ; i++){
    //         if(arr[i] != arr[0]){
    //             ans.push_back("NO");
    //             return ;
    //         }
    //         if(i == n-1) {
    //             ans.push_back("YES");
    //             return;
    //         }
    //     }
    // }
    for(int i=0; i<n; i++){
        // if(i != n/2)
        sum += arr[i];
    }
    for(int i=0; i<n; i++){
        double temp = sum - (double) arr[i];
        temp = temp/(double)(n-1);
        if(temp == arr[i]){
            ans.push_back("YES");
            return ;
        }
    }
    // if(arr[n/2] == sum/(double)(n-1)) 
    // ;
    // else
    ans.push_back("NO");
}

int main(){
    int t;
    cin>>t; 
    int x = t;
    vector<string> ans;
    while(t--){
        int n;
        cin>>n;
        vector<double> arr(n);
        fin{cin>> arr[i];
        }
        solve(n,arr,ans);
    }
    for(int i=0; i<x; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}