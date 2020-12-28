#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    double n,x,y;
    cin>>n>>x>>y;
    if(x>=((n*y)/100)){
        cout<<0;
    }else {
          double req=n*y/100;
          
          cout<<ceil(req)-x;
    }
}
