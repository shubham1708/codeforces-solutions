#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int n;   cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;   cin>>m;
    int b[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    
    
         int count=0,max=0;
        for( int j=0;j<m;j++){
           
            for(int i=0;i<n;i++){
                if(b[j] % a[i] ==0){
                    int x=b[j]/a[i];
                   if(x>max){
                        max=x;
                        count=1;
                    } else if(x==max){
                        count+=1;
                    }
                    break;
                }
            }
        }
        cout<<count<<endl;
        
    }
