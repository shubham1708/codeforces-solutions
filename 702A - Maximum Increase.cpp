#include<iostream>
using namespace std;
int main(){
	int n;  cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}int count=0,max=0;
	for(int i=1;i<n;i++){
		
		
		if(a[i]>a[i-1]){
			count++;
		}else{
		    if(count>max){
		        max=count;
		    }count=0;
		}
	}
	if(count>max){
	    max=count;
	}
	cout<<max+1<<endl;
}
