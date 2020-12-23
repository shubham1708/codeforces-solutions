By Unknown_star, contest: Educational Codeforces Round 65 (Rated for Div. 2), problem: (A) Telephone Number, Accepted, #, Copy
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
	    int n,count=0;  cin>>n;
	    string s;  cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='8'){
	            for(int j=i;j<n;j++){
	                count++;
	                
	            }
	            break;
	        }
	    }
	    if(count>=11){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
}
