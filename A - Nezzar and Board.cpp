//For codeforces use GNU C++14
#include<bits/stdc++.h>
using namespace std;
#define N 200005
#define LL long long
LL T,n,k,a[N];
int main()
{
	scanf("%lld",&T);
	while(T--){
		LL g=0;
		scanf("%lld%lld",&n,&k);
		for(LL i=1;i<=n;i++)scanf("%lld",&a[i]);
		for(LL i=2;i<=n;i++)g=__gcd(g,a[i]-a[1]);
		if(g==0)printf("%s\n",k==a[1]?"YES":"NO");
		else printf("%s\n",(k-a[1])%g==0?"YES":"NO");
	}
}
