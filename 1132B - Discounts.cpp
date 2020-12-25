#include<iostream>
#include<bits/stdc++.h>
 
#define ll long long
using namespace std;
int main(){
    ll n;   cin>>n;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    } sort(a,a+n);
    reverse(a,a+n);
    ll m;   cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++){
        cin>>b[i];
        cout<<sum-a[b[i]-1]<<endl;
         
       
        
    }
   
    
}
