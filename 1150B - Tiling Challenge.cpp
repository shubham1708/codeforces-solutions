#include<iostream>
 
using namespace std;
int main(){
	int n;  cin>>n;
	char a[n+1][n+1];
	a[0][0]='.';
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		   cin>>a[i][j];
	}
	}
	int count=0;
		for(int i=1;i<=n;i++){
		  for(int j=1;j<=n;j++){
		     if(a[i][j]=='.'){
		     	if(a[i+1][j]=='.' && a[i+1][j-1]=='.' && a[i+1][j+1]=='.' && a[i+2][j]=='.'){
		     		a[i+1][j]='#';
					  a[i+1][j-1]='#';
					   a[i+1][j+1]='#';
					    a[i+2][j]='#';
					    
				 }else{
				 	cout<<"NO";
				 	count=1;
				 	break;
				 }
			 }
			 if(count==1){
			 	break;
			 }
	}
	      if(count==1){
		        break;
	  }
	}
	if(count==0){
		cout<<"YES";
	}
	
}
