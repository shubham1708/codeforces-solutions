#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int d2,d3,d5,d6,b,c;  cin>>d2>>d3>>d5>>d6;
	 b=min(d2,min(d5,d6));
	 d2-=b;
	 d5-=b;
	 d6-=b;
	 c=min(d2,d3);
	 cout<<(b*256)+(c*32);
}
