#include<string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;  cin>>n;
	
	string s;  cin>>s;
	string r="0000000000";
	
		for(int i=0;i<n;i++){
			if(s[i]=='L'){
				for(int j=0;j<10;j++){
					if(r[j]=='0'){
						r[j]='1';
					
						break;
					}
				}
			}else if(s[i]=='R'){
				for(int j=10-1;j>=0;j--){
					if(r[j]=='0'){
					    r[j]='1';
					
						break;
					}
				}
			}else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
				int p=s[i]-48;
				r[p]='0';
				
			}
		}
	
	cout<<r;
}
