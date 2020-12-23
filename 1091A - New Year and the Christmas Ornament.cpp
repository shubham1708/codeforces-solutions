#include<iostream>
using namespace std;
int main(){
    int y,b,r;  cin>>y>>b>>r;
    for(int i=r;i>0;i--){
        if((i-1)<=b && (i-2)<=y){
            cout<<3*i-3;
            break;
        }
    }
}
