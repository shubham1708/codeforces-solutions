#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;  cin>>n>>m;
    int a[5000];
    for(int i=1;i<=m;i++){
        int d;
        cin>>d;
        a[d]++;
    }sort(a+1,a+n+1);
    cout<<a[1];
    
}
