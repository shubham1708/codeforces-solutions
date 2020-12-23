/***
done by shubham yadav
dept. of CSE, MANAV RACHNA UNIVERSITY
***/







#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;  cin>>n;
    long long a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       
        sum+=a[i];
    }sort(a,a+n);
    
    double avg;
    double ans=0.0;
    for(int i=0;i<n;i++){
        avg=(double)sum/n;
        if(avg>=4.5){
            break;
        }else if(avg<4.5 && a[i]!=5){
            
            
            sum+=5-a[i];
            ans++;
        }
        
    }
    cout<<ans;
   
   
}
