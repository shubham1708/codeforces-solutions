#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;  cin>>q;   while(q--){
        string s,t;  cin>>s;
        cin>>t;
        string a=s;
        string b=t;
        while(true){
            if(a.length()==b.length()){
                if(a==b){
                    cout<<a<<endl;
                    break;
                }else{
                    cout<<-1<<endl;
                    break;
                }
            }else if(a.length()<b.length()){
                a+=s;
            }else if(a.length()>b.length()){
                b+=t;
            }
        }
    }
}
