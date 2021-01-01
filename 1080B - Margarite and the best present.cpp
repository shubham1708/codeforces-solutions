#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll q;  cin>>q;
    while(q--){
    ll l,r;  cin>>l>>r;
    if(l%2==0){
        if(r%2!=0){
            cout<<l/2+(-1*(r/2+1))<<endl;
        }else{
            cout<<l/2+r/2<<endl;
        }
    }else{
        if(r%2==0){
            cout<<r/2+1+(-1*(l/2+1))<<endl;
        }else{
            cout<<-1*(l/2+r/2+1)<<endl;
        }
    }
    }
}
