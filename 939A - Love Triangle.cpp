#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main(){
	int n;  cin>>n;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=1;i<=n;i++){
		int d=a[i];
		int s=a[d];
		if(a[s]==i){
			count++;
			break;
		}
	}
	if(count>0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
