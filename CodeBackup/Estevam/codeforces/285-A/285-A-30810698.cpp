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
	int n, k;
	cin >> n >> k;
	int curr = 0;
    for (int i = 0; i < k; ++i){
		cout << n-i << " ";
    }
    cout << 1;
    for (int i = 2; i <= n - k; ++i){
		cout << " " << i;
    }
    cout << endl;

    return 0;

}