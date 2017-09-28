// 30810883	2017-09-28 19:45:41	Estevam	96A - Football	GNU C++11	Accepted	30 ms	0 KB

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

int main (void) {
  	fastcin;
	string str;
	cin >> str;
	int cnt = 1;
	char prev = str[0];

	bool flag = false;
	for(int i=1;i<str.size();i++){
		if(prev == str[i])
			cnt++;
		else
			cnt = 1;
		
		if(cnt == 7)
			flag = true;
		prev = str[i];
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
		
	return 0;
}
