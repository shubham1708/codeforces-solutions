#include<iostream>
 
using namespace std;
int main(){
    long long t;  cin>>t;
    while(t--){
        long long x,y;   cin>>x>>y;
        long long a,b;  cin>>a>>b;
       long long ans;
            if(x>=y){
            	 ans=((y)*b)+(x-(y))*a;
			}else{
				 ans=((x)*b)+(y-x)*a;
			}
             long long ans1=(x+y)*a;
             if(ans<=ans1){
                 cout<<ans<<endl;
             }else{
                 cout<<ans1<<endl;
             }
    }
}
