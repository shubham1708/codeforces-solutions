#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        int n,d;   cin>>n>>d;
         int a[n],count=0;
         for(int i=0;i<n;i++){
             cin>>a[i];
             if(a[i]<=d){
                 count++;
             }
         }
         
         sort(a,a+n);
         if((a[0]<=d && a[1]<=d && a[0]+a[1]<=d) || (count==n)){
             cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
    }
}
