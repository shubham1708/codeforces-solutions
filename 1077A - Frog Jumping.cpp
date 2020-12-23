#include<iostream>
 
using namespace std;
int main(){
	int t;  cin>>t;   while(t--){
		long long a,b,k,sum=0;   cin>>a>>b>>k;
		if(k>1){
			if(k%2==0){
			
			sum=(k/2)*(a-b);
		}else{
				sum=(k/2)*(a-b)+a;
		}
		    cout<<sum<<endl;
		}else{
			cout<<a<<endl;
		}
	}
}
