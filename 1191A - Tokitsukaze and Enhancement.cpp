#include<iostream>
using namespace std;
int main(){
	int n,x;   cin>>n;
	char b;
	if(n%4==1){
		x=0;
		b='A';
	}else if(n%4==2){
		x=1;
		b='B';
	}else if(n%4==3){
		x=2;
		b='A';
	}else{
		x=1;
		b='A';
	}
	cout<<x<<" "<<b;
}
