#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
 int main(){
     int n; 
     cin>> n;
     int t = n;
     vector<string> ans;
     while(t--){
         string s; 
         cin>>s; 
         int len = s.length();
         if(len <= 10){
             ans.push_back(s);
             continue;
         }
         string temp = "";
         temp+=s[0];
         temp+=to_string(len-2);
         temp+=s[len-1];
         ans.push_back(temp);
     }
     for(int i=0; i<n; i++){
         cout<<ans[i]<<endl;
     }
 }