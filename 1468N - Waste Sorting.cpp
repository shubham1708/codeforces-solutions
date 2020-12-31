#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;   cin>>t;
    while(t--){
    int x,y,z;  cin>>x>>y>>z;
    
    int a,b,c,d,e;  cin>>a>>b>>c>>d>>e;
   if( x<a || y<b || z<c){
                cout<<"NO";
           
            }else{
                
        x-=a;
        y-=b;
        z-=c;
        a=b=c=0;
        if(d>x && x!=0){
            int l=d-x;
            d-=x;
            x=0;
        }else if(d<=x){
            x-=d;
            d=0;
        }
        if(e>y && y!=0){
            int l=e-y;
            e-=y;
            y=0;
        }else if(e<=y){
            y-=e;
            e=0;
        }
        if((d+e)<=z) {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }cout<<endl;
        
    }
        
       
    }
