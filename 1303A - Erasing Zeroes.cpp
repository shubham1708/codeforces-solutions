#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;  cin>>t;
	while(t--){
		string s;  cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				for(int j=i;j<s.length();j++){
					if(s[j]=='0'){
						count++;
					}if(j==(s.length()-1)){
						break;
					}
				}
			}
			if(count>0){
				break;
			}
		}int cnt=0;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='0'){
				cnt++;
			}else{
				break;
			}
		}
		if(count>cnt){
			cout<<count-cnt<<endl;
		}else{
			cout<<0<<endl;
		}
		
	}
}
