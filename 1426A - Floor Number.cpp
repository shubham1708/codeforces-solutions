#include<iostream>
 
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		int n,x;   cin>>n>>x;
		int b=n-2;
		int floor=1;
		if(n==1 || n==2){
			cout<<1<<endl;
		}else{
		
		while(b>x){
			
			if(b<=x){
				
				break;
			}
			b=b-x;
			floor++;
		}cout<<floor+1<<endl;
	}
	}
}
