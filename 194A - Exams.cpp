#include<iostream>
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;  cin>>n>>k;
    if((n==1 && k>2) || (3*n==k) || (4*n==k) || (5*n==k)){
        cout<<0;
    }else{
        if(2*n==k){
            cout<<n;
        }else{
            
            if(k<=n*3){
                cout<<n*3-k;
            }else {
                cout<<0;
            }
        }
    }
}
