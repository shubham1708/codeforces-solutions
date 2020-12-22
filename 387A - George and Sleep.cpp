Created By SHUBHAM YADAV
Dept. of CSE ,MANAV RACHNA UNIVERSITY






#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int hh,mm; char c;  cin>>hh>>c>>mm;
    int h,m;     char d; cin>>h>>d>>m;
      int curr=hh*60+mm;
      int sleep=h*60+m;
     
        int remain;
      if(curr==sleep){
          cout<<"00"<<":"<<"00";
          }else if(curr>sleep){
               if(curr==0){
          curr=24*60;
      }
           remain=curr-sleep;
            if((remain/60)/10==0 && (remain%60)/10==0){
           cout<<0<<remain/60<<":"<<0<<remain%60;
      }else if((remain/60)/10==0){
          cout<<0<<remain/60<<":"<<remain%60;
      }else if((remain%60)/10==0){
          cout<<remain/60<<":"<<0<<remain%60;
      }else{
      cout<<remain/60<<":"<<remain%60;
      }
      }else if(sleep>curr){
                
           remain=sleep-curr;
           int dl=24*60-remain;
            if((dl/60)/10==0 && (dl%60)/10==0){
           cout<<0<<dl/60<<":"<<0<<dl%60;
      }else if((dl/60)/10==0){
          cout<<0<<dl/60<<":"<<dl%60;
      }else if((dl%60)/10==0){
          cout<<dl/60<<":"<<0<<dl%60;
      }else{
      cout<<dl/60<<":"<<dl%60;
      }
      }
     
}
