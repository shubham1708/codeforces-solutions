/***  created by shubham yadav
dept. of CSE ,MANAV RACHNA UNIVERSITY
***/




#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n,k;   cin>>n>>k;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double avg=sum/(double)n;
    ll count=0;
    while(avg<(k-0.5)){
      sum+=k;
      n++;
      count++;
      avg=sum/(double)n;
    
    }
    cout<<count;
}
