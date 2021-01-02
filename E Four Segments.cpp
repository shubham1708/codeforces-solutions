#include<iostream>
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;   cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        sort(a,a+4);
        int l=a[0];
        int r=a[2];
            cout<<l*r<<endl;
        
    }
}
