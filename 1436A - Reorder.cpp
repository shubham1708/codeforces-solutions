#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;   cin>>t;
	while(t--){
	int n,m;  cin>>n>>m;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}int sum=0;
	sort(a,a+(n+1));
	for(int i=1;i<=n;i++){
	    sum+=a[i];
	}
	if(sum==m){
	    cout<<"YES"<<endl;
	}else{
	    cout<<"NO"<<endl;
	}
	}
}
