#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,count=0;  cin>>n;
	string s,a[10000];
	for(int i=0;i<n;i++){
		cin>>s;
		if(s[0]=='O' && s[1]=='O' && count==0){
			s[0]='+';
			s[1]='+';
			count=1;
			a[i]=s;
		}else if(s[3]=='O' && s[4]=='O' && count==0){
				s[3]='+';
			s[4]='+';
			count=1;
			a[i]=s;
		}else{
			a[i]=s;
		}
	}
	if(count==1){
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<endl;
		}
	}else{
		cout<<"NO"<<endl;
	}
}
 
