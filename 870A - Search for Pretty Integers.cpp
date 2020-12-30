#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n,m;  cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                count=a[i];
                break;
            }
        }if(count!=0){
            break;
        }
    }
    if(count!=0){
        cout<<count;
    }else if(a[0]>b[0]){
        cout<<b[0]<<a[0];
    }else if(a[0]<b[0]){
        cout<<a[0]<<b[0];
    }
 
}
