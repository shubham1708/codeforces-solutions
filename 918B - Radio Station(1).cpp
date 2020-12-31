#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,k;   cin>>n>>k;
    string s[2*n],s1,s2;
    for(int i=0;i<2*n;i++){
        cin>>s[i];
    }
    for(int i=0;i<k;i++){
        cin>>s1>>s2;
        for(int j=1;j<2*n;j+=2){
            string s3=s[j];
            int l1=s1.length();
            int l2=s2.length();
            int count=0;
            char c[l2-1],c3[s3.length()];
            for(int p=0;p<l2-1;p++){
                c[p]=s2[p];
                c3[p]=s3[p];
                if(c3[p]==c[p]){
                    count++;
                }else {
                    break;
                }
            }
            if(count==s3.length()){
                cout<<s1<<" "<<s2<<" "<<"#"<<s[j-1]<<endl;
                break;
            }
        }
        
        
    }
}
