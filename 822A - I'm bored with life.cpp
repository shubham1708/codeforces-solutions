#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;  cin>>a>>b;
    int t=min(a,b);
    int fact=1;
    for(int i=1;i<=t;i++){
        fact*=i;
    }
    cout<<fact;
}
