#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n;  cin>>n;
    ll a[n+1];
    a[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    ll temp;
        
            for(ll j=1;j<=n/2;j+=2){
                temp=a[j];
                a[j]=a[n-j+1];
                a[n-j+1]=temp;
            }
        
    
    for(ll i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
