#include<iostream>
 
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		int n;  cin>>n;
		string s;   cin>>s;
		int zero=0,one=0;
			for(int i=0;i<s.length();i++){
				if(s[i]=='0'){
				    zero++;
				}else{
					one++;
				}
			}
			if(one>zero){
				for(int i=0;i<n;i++){
					cout<<1;
				}cout<<endl;
			}else{
				for(int i=0;i<n;i++){
					cout<<0;
				}cout<<endl;
			}
		
		
	}
}
