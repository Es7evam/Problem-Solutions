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
  	ll tmpn = n;
  	int cnt2 = 0, cnt5 = 0;
  	while(tmpn % 2 == 0){
  		tmpn /= 2;
  		cnt2++;
  	}
  	while(tmpn % 5 == 0){
  		tmpn /= 5;
  		cnt5++;
  	}
  	ll answ = 1;
  	while(cnt5 < k){
  		answ *= 5;
  		cnt5++;
  	}
  	while(cnt2 < k){
  		answ *= 2;
  		cnt2++;
  	}
  	cout << answ * n << endl;
	return 0;
}