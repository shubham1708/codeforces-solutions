#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;   cin>>n>>a>>b>>c;
    if(n==1){
        cout<<0;
    }else{
        int d=0;
        d=min(min(a,b),c);
        int maxi=max(max(a,b),c);
        if(d==a){
            cout<<(n-1)*a;
        }else if(d==b){
            cout<<(n-1)*b;
        }else if(maxi==a && d==c){
            d=b;
            cout<<(n-2)*c+d;
        }else if(maxi==b && d==c){
            d=a;
            cout<<(n-2)*c+d;
        }
    }
}
