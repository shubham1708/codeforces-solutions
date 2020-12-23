#include<iostream>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		int x,y;  cin>>x>>y;
		if(x==y){
			cout<<2*x<<endl;
		}else{
			if(x==y+1 || y==x+1){
				cout<<x+y<<endl;
			}else{
				if(x>y){
					cout<<2*x-1<<endl;
				}else{
					cout<<2*y-1<<endl;
				}
			}
		}
	}
}
