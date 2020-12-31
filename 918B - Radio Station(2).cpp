#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,k;   cin>>n>>k;
    string s[n],st[n],s1,s2;
    for(int i=0;i<n;i++){
        cin>>s[i]>>st[i];
    }
    for(int i=0;i<k;i++){
        cin>>s1>>s2;
       // string s21=s2;
       // s21[s21.length()-1]=' ';
       
        for(int j=0;j<n;j++){
            string s3=st[j];
            int count=0;
           for(int p=0;p<s3.length();p++){
               if(s2[p]==s3[p]){
                   count++;
               }
           }if(count==s3.length()){
               cout<<s1<<" "<<s2<<" "<<"#"<<s[j]<<endl;
               break;
           }
        }
        
    }
}
