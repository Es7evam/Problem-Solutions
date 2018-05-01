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

int v[57];

int main (void) {
  	fastcin;
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
		cin >> v[i];
  
	int diff = INF;
	sort(v, v+m);
	for(int i=0;i+n-1<m;i++){
		diff = min(diff, v[i+n-1] - v[i]);
	}
	cout << diff << endl;
		
	return 0;
}