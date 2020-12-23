#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		int n;   cin>>n;
		int a[n];
		if(n>2){
			for(int i=0;i<n;i++){
				a[i]=n-i;
			}
			swap(a[n/2],a[0]);
			for(int i=0;i<n;i++){
				cout<<a[i]<<" ";
			}cout<<endl;
		}else{
				for(int i=0;i<n;i++){
				a[i]=n-i;
				cout<<a[i]<<" ";
				
			}cout<<endl;
		}
	
	}
}
