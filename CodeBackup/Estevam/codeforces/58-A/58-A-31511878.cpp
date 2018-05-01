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
	string a = "hello";
	int j=0;
	for(int i=0;i<str.size();i++){
		if(str[i] == a[j])
			j++;
	}
	if(j == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
  
	return 0;
}