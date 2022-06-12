#include<bits/stdc++.h>
using namespace std;

// #define f(i,n) for(int i=0;i<n;i++)
int cal(int l1,int r1,int l2,int r2)
{
    if(r1>=l2 && l2>=l1){
            return l2;
        }
        
    return l1+l2;
}
 int main(){
     int n; 
     cin>> n; 
     while(n--){
        int l1,r1,l2,r2; 
        cin>>l1>>r1>>l2>>r2;
        // cout<<min(cal(l1,r1,l2,r2), cal(l2,r2,l1,r1))<<endl;
        if(r1>=l2 && l2>=l1){
            cout<<l2<<endl;
            continue;
        }
        if(r2>=l1 && l1>=l2){
            cout<<l1<<endl;
            continue;
        }
        cout<<l1+l2<<endl;
     }
     return 0;
 }