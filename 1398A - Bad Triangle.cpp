
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;   cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int id1,id2,id3=0,sum=0,count=0;
		id1=1;
		id2=2;
		for(int i=2;i<n;i++){
			if(a[0]+a[1]<=a[i]){
				count++;
				sum=i+1;
				break;
			}
		}
		if(count==1){
			cout<<id1<<" "<<id2<<" "<<sum<<endl;
		}else{
			cout<<-1<<endl;
		}
		
	}
}
