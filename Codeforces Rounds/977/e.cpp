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

int vis[200007];
vector<int> v[200007];
vector<int> currCycle;
map<int, int> mp;

void dfs(int c){
	vis[c] = 1;
	currCycle.push_back(c);
	for(auto next : v[c]){
		if(!vis[next])
            dfs(next);
	}
}

int main(void){
    fastcin;
	int n, m;
    cin >> n >> m;
	for(int i = 0; i < m; i++){
		int a, b;
        cin >> a >> b;
		v[a].pb(b);
		v[b].pb(a);
		mp[a]++;
		mp[b]++;
	}

	int answ = 0;
    bool ok;
	for(int curr = 1; curr <= n; curr++){
		if(!vis[curr]){
			dfs(curr);
			ok = true;
			for(int adj : currCycle) {
                if(mp[adj] != 2)
                    ok = false;
            }</int,></int>
			currCycle.clear();
			if(ok)
                answ++;
		}
	}
	cout << answ << endl;
	return 0;
}
