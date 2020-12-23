#include<iostream>
using namespace std;
int main(){
    int n,k;  cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int count=0,stand=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k){
            count++;
        }else{
            stand=i;
            for(int i=n-1;i>stand;i--){
        if(a[i]<=k){
            count++;
        }else{
            break;
        }
    }
            break;
        }
    }
    cout<<count;
}
