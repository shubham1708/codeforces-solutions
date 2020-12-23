#include<iostream>
#include<string>
 #include<bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int len=s.length();
    int count=0;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
    }
    if(count==0){
        cout<<len;
    }else if(count==len){
        cout<<1;
    }else{
        string s1;
        char cc;
        int flag=0;
        int p=len-1;
        int lp=1;
        string s4[len];
        s4[0]=s;
        while(p--){
        cc=s[len-1];
        s1=s;
        for(int i=len-1;i>0;i--){
            s[i]=s[i-1];
        }s[0]=cc;
          s4[lp]=s;
          lp++;
        }
         sort(s4,s4+len);
         for(int i=0;i<len;i++){
         	
         	if(s4[i]!=s4[i+1]){
         		flag++;
			 }
		 }
		 cout<<flag;
    }
}
