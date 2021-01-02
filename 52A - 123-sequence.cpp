#include<iostream>
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    int a[n],one=0,two=0,three=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            one++;
        }else if(a[i]==2){
            two++;
        }else{
            three++;
        }
    }
    cout<<min(min(one+two,two+three),min(two+three,one +three));
}
