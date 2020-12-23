#include<iostream>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		int n;  cin>>n;
		if(n>30){
		
		int d=n-30;
		if(d!=14 && d!=6 && d!=10){
		    cout<<"YES"<<endl;
	            	cout<<6<<" "<<10<<" "<<14<<" "<<d<<endl;
		}else{
		    cout<<"YES"<<endl;
	            	cout<<6<<" "<<10<<" "<<15<<" "<<d-1<<endl;
		}
	
		
	}else{
		cout<<"NO"<<endl;
	}
	}
}
