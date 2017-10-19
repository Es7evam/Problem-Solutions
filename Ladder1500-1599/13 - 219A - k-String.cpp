//31511819	2017-10-19 17:53:57	Estevam	219A - k-String	GNU C++11	Accepted	30 ms	2100 KB

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

map<char, int> mp;

int main (void) {
  	fastcin;
  	int n;
  	string str;
  	cin >> n;
  	cin >> str;
	for(int i=0;i<str.size();i++){
		mp[str[i]]++;
	}
	
	bool possible = true;
	for(int i=1;i<str.size();i++){
		if(mp[str[i]] % n != 0){
			possible = false;
			break;
		}
	}
  
	if(!possible){
		cout << -1 << endl;
		return 0;
	}
	
	vector<char> answ;
	int index = 0;
	for(int i=0;i<n;i++){
		for(auto a : mp){
			for(int j=0;j<(a.se/n);j++)
				cout << a.fi;
		}
	}
	cout << endl; 	
		
	return 0;
}
