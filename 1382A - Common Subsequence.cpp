#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;   cin>>t;
	while(t--){
		int n,m;  cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
			for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort (a,a+n);
		int d,count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i]==b[j]){
					count++;
					d=a[i];
					break;
				}if(count!=0){
					break;
				}
			}
		}
		if(count>0){
			cout<<"YES"<<endl;
			cout<<1<<" "<<d<<endl;;
		}else{
			cout<<"NO"<<endl;
		}
}
}
