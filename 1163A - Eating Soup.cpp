#include<iostream>
 
using namespace std;
int main(){
    int n,l;   cin>>n>>l;
    if(n==l){
        cout<<0;
    }else if(l==0 || l==1){
        cout<<1;
    }else{
        cout<<min(l,n-l);
    }
}
