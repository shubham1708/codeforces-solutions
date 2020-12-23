#include<iostream>
using namespace std;
int main(){
    int q; cin>>q;
    while(q--){
 
   long long int n,a,b;  cin>>n>>a>>b;
   if(a<=b && b>a*2){
       cout<<n*a<<endl;
   }else if(a<=b && b<=a*2){
       long long int d=n%2;
       cout<<(n/2)*b+d*a<<endl;
   }
       else{
       long long int d=n%2;
       cout<<(n/2)*b+d*a<<endl;
   }
    } 
}
