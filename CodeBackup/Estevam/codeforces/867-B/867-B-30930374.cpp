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
  	int n;
	cin >> n;
	if(n == 1)
		cout << "1 1" << endl << "1" << endl;
	else{
		cout << (n-1)*2 << " 2" << endl << "1 2" << endl;
	}
	return 0;
}