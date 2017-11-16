//32366046  2017-11-17 01:05:13   Estevam   166A - Rank List  GNU C++11   Accepted  30 ms   0 KB 

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

vector<pair<int, int>> v;
int main (void) {
  	fastcin;
  	int n, k;
  	cin >> n >> k;
  	int a, b;
  	for(int i=0;i<n;i++){
  		cin >> a >> b;
  		v.pb(mk(a,-b));
  	}
  	sort(v.begin(), v.end());
  	reverse(v.begin(),v.end());
  	pair<int,int> curr;
  	curr = v[k-1];
  	int cnt = 0;
  	for(int i=0;i<n;i++){
  		pair<int,int> a;
  		a = v[i];
  		if(a.fi == curr.fi && a.se == curr.se)
  			cnt++;
  	}
  	cout << cnt << endl;
	return 0;
}
