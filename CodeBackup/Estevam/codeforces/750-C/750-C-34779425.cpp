#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

const int INF = 0x3f3f3f3f;
int minx = -INF;
int maxx = INF;

vector<pair<int, int>> v;

int main(void){
	int n;
	cin >> n;
	int a, div;
	for(int i=0;i<n;i++){
		cin >> a >> div;
		v.pb(mk(a,div));
	}
	int newmax = maxx;
	int newmin = minx;
	for(int i=0;i<n;i++){
		if(v[i].se == 2){
			maxx = min(1899, newmax);
			minx = newmin;
		}
		if(v[i].se == 1){
			minx = max(1900, newmin);
			maxx = newmax;
		}
		if(maxx < minx){
			cout << "Impossible" << endl;
			return 0;
		}
		newmax = maxx + v[i].fi;
		newmin = minx + v[i].fi;
	}
	if(maxx > 200000007)
		cout << "Infinity" << endl;
	else
		cout << newmax << endl;
	return 0;
}