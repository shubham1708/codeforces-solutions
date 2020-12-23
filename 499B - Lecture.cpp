#include<bits/stdc++.h>
using namespace std;
 

 
map<string ,string> mp;
int main(){
	int n,m;
	mp.clear();
	cin >> n >> m;
	for(int i = 0 ; i < m ; i ++){
		string a;
		string b;
		cin >> a;
		cin >> b;
		string c = a.size() <= b.size() ? a : b;
		mp[a] = c;
		mp[b] = c;
	}
	for(int i = 0 ; i < n; i ++){
		string a;
		cin >> a;
		cout << mp[a] << " ";
	}
	cout << endl;
}
