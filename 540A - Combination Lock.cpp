#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;  cin>>n;
	string s1,s2;   cin>>s1>>s2;
	int count=0;
	for(int i=0;i<n;i++){
	
		count+=min(abs(s1[i]-s2[i]),10-abs(s1[i]-s2[i]));
	}
	cout<<count<<endl;
}
