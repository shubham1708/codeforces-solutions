#include<iostream>
using namespace std;
 
 
int main()
{
	int n,a,x,b,y;
	cin>>n>>a>>x>>b>>y;
	
	while(1){
		if(a>n){
			a=1;
		}
		if(b==0){
			b=n;
		}
		if(a==b){
			puts("YES");
			return 0;
		}
		if(a==x){
			break ;
		}
		if(b==y){
			break ;
		}
		a++;
		b--;
		
	}
	puts("NO");
	
    return 0;
}
