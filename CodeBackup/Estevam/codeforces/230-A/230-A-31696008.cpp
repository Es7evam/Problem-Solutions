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

vector<pair<int,int> > v;

int main (void) {
  	fastcin;
	int s, n;
	cin >> s >> n;
	int a, b;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		v.pb(mk(a,b));
	}
	sort(v.begin(), v.end());
	int cando = true;
	for(int i=0;i<n;i++){
		if(s <= v[i].fi)
			cando = false;
		s += v[i].se;
	}
	if(cando)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

  
	return 0;
}