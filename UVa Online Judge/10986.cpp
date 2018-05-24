#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>
#include <cstring>
#include <math.h>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int dist[20007];
vector<pair<int, int>> v[20007];

int main(void){
	int cases;
	cin >> cases;
	for(int caso=1;caso<=cases;caso++){
		int n, m, s, t;
		int a, b, cost;
		cin >> n >> m >> s >> t;
		memset(dist, 0, sizeof(dist));
		for(int i=0;i<20006;i++){
			dist[i] = INF;
			v[i].clear();
		}
		for(int i=0;i<m;i++){
			cin >> a >> b >> cost;
			v[a].pb(mk(cost, b));
			v[b].pb(mk(cost, a));
		}	
		priority_queue <pair<int,int> > pq;
		if(pq.empty())
			cout << "vazio " << endl;
		pq.push(mk(s, 0));
		
		dist[s] = 0;
		while(!pq.empty()){
			pair<int,int> curr = pq.top();
			pq.pop();
			if(curr.se == t)
				break;
			for(auto a : v[curr.se]){
				cout << curr.se << " " << dist[curr.se] << " " << a.fi << endl;
				if(dist[a.se] > dist[curr.se] + a.fi){ //dist > usando curr
					dist[a.se] = dist[curr.se] + a.fi;
					pq.push(a);
				}
			} 
		}
		for(int i=0;i<n;i++){
			cout << "i : " << dist[i] << endl;
		}
		if(dist[t] != INF)
			cout << "Case #" << caso << ": " << dist[t] << endl;
		else
			cout << "Case #" << caso << ": unreachable" << endl;
	}
	
}
