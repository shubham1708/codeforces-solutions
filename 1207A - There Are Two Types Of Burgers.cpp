#include<iostream>
using namespace std;
int main(){
	int t;  cin>>t;  while(t--){
		int b,p,f;  cin>>b>>p>>f;
		int h,c;  cin>>h>>c;
		if(b==1){
			cout<<0<<endl;
		}else if(h>=c){
			int half=b/2;
			if(half<=p){
				cout<<half*h<<endl;
			}else{
				int rem=half-p;
				if(rem<=f){
					cout<<p*h+rem*c<<endl;
				}else{
					cout<<p*h+f*c<<endl;
				}
			}
		}else{
			int half=b/2;
			if(half<=f){
				cout<<half*c<<endl;
			}else{
				int rem=half-f;
				if(rem<=p){
					cout<<f*c+rem*h<<endl;
				}else{
					cout<<f*c+p*h<<endl;
				}
			}
		}
	}
}
