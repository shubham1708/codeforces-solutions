#include<iostream>
using namespace std;
int main(){
    int y,w;  cin>>y>>w;
    if(y>=w){
        int s=6-y+1;
        if(s==5){
            cout<<"5/6"<<endl;
        }
            else if(6%s==0){
               cout<<1<<"/"<<6/s<<endl;
           }else if(6%s!=0){
               cout<<6%s<<"/"<<6/(6%s)<<endl;
           }
    }else{
    	 int s=6-w+1;
            if(s==5){
                cout<<"5/6"<<endl;}else if(6%s==0){
               cout<<1<<"/"<<6/s<<endl;
           }else if(6%s!=0){
               cout<<6%s<<"/"<<6/(6%s)<<endl;
           }
	}
}
