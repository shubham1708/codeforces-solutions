#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char first='a';
	string s;   cin>>s;
		int move=0;
	for(int i=0;i<s.length();i++){
		long long a1=abs(s[i]-first);
		long long a2=26-abs(s[i]-first);
	
		move+=min(a1,a2);
		first=s[i];
	}
	cout<<move<<endl;
}
