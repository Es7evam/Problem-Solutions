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

priority_queue<pair<int,int>> pq;
vector<bool> taken;
vector<vector<pair<int, int>>> v;

void primproc(int u) {
	taken[u] = true;
	for (int i = 0; i < (int) v[u].size(); i++) {
		pair<int, int> p = v[u][i];
		if (!taken[p.first])
			pq.push(pair<int, int>(-p.second, -p.first));
	}
}

int main() {
	int m, n;
	fastcin;
	int a, b, w, u;

	while (cin >> m >> n) {
		if(n == 0 && m == 0)
			return 0;
		int total = 0;

		v.assign(m, vector<pair<int, int>> ());

		for (int i = 0; i < n; i++) {
			cin >> a >> b >> w;
			v[a].push_back(pair<int, int>(b, w));
			v[b].push_back(pair<int, int>(a, w));
			total += w;
		}
		taken.assign(m, false);
		primproc(0);
		int mstCost = 0;
		while (!pq.empty()) {
			pair<int, int> front = pq.top();
			pq.pop();
			u = -front.second, w = -front.first;
			if (!taken[u]) {
				mstCost += w;
				primproc(u);
			}
		}
		cout << total - mstCost << endl;
	}
	return 0;
}