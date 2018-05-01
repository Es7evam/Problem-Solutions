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
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		if(str.size() <= 10){
			cout << str << endl;
			continue;
		}else{
			cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
		}
	}
  
	return 0;
}