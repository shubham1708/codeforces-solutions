#include<bits/stdc++.h>
 
using namespace std;
 
/// Typedef
typedef long long int ll;
 
 
//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)
 
//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
 
#define mx 100007
#define pf(a) cout<<a<<endl
 
//ll arr[]
int main()
{
    ll i,j=0,t,k,l,a=0,b,m=0,n,ck=0;
    cin>>n;
    ll arr[n];
    map<int, int>my;
    map<int, int>::iterator it;
 
    for(i=0; i<n; i++){
        scl1(a);
        my[a]++;
    }
 
    for(it = my.begin(); it!=my.end(); it++){
        arr[j++] = it->second;
    }
    sort(arr, arr+j);
 
    cout<<arr[j-1]<<endl;
}
