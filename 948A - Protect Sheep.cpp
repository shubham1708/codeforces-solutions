#include<iostream>
 
using namespace std;
int main(){
	long long r,c;   cin>>r>>c;
	char a[r+100][c+100];
	a[0][0]='#';
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
			if(a[i][j]=='.'){
			    a[i][j]='D';
			}
		}
	}int flag=0;
		for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]=='S' && (a[i][j-1]=='W' || a[i][j+1]=='W' || a[i+1][j]=='W' || a[i-1][j]=='W')){
				cout<<"NO";
				flag=1;
				break;
			}
			}if(flag==1){
				break;
		}
	}if(flag!=1){
	    cout<<"YES"<<endl;
	    for(int i=1;i<=r;i++){
	        for(int j=1;j<=c;j++){
	            cout<<a[i][j];
	        }cout<<endl;
	    }
	}
}
