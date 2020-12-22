/***Created by  SHUBHAM YADAV
      Student at Manav Rachna University,Dept. of CSE
      ***/













#include<iostream>
 
using namespace std;
int main(){
    long long a,b,c,d;   cin>>a>>b>>c>>d;
    if((a+b>c && b+c>a && a+c>b) || (a+d>b && a+b>d && b+d>a) || (b+c>d && b+d>c && c+d>b) || (a+c>d && a+d>c && c+d>a) ){
        cout<<"TRIANGLE";
    }else if((a==b+c || b==a+c || c==a+b) || (a==b+d || b==a+d || d==a+b) || (c==b+d || d==b+c || b==c+d) || (a==c+d || c==a+d || d==a+c)){
        cout<<"SEGMENT";
    }else{
        cout<<"IMPOSSIBLE";
    }
}
