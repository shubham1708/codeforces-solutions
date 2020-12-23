#include<iostream>
using namespace std;
int main(){
	int t;   cin>>t;   
	while(t--){
		int h,m;  cin>>h>>m;
		int rh=(24-h);
		int rm=60-m;
		cout<<(rh*60)+rm-60<<endl;
		
	}
}
