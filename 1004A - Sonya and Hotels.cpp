#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n,d;   cin>>n>>d;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long count=0;
    for(int i=0;i<n;i++){
        if(i!=0){
            int p=a[i]-d;
            if(p>a[i-1]+d){
                count++;
            }
        }else{
            int p=a[i]-d;
            count++;
        }
        if(i==n-1){
            count++;
        }else{
            int p=a[i]+d;
            if(p<=a[i+1]-d){
                count++;
            }
        }
    }cout<<count;
}
