#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;  cin>>n;
    string s[n],s1,s2;
    for(int i=0;i<n;i++){
        cin>>s[i];
        s1=s[0];
        if(s[i]!=s[0]){
            s2=s[i];
        }
        
    }int count1=0,count2=0;
    for(int j=0;j<n;j++){
        if(s[j]==s1){
            count1++;
        }else{
            count2++;
        }
    }
    if(count1>count2){
        cout<<s1;
    }else{
        cout<<s2;
    }
}
