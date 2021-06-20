#include<iostream>
using namespace std;
 
 
void solve(){
    long long n,m,x;  cin>>n>>m>>x;
     long long col=(x-1)/n;
     long long row=(x-1)%n;
     cout<<row*m+col+1<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long  t;  cin>>t;
    while(t--){
        solve();
    }
}
