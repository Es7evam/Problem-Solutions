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

int cnt[2007], dist[2007];
vector <pair<int, int>> V[2007];


int main(void){
	int cases;
	cin >> cases;
	while(cases--){
		memset(cnt, 0, sizeof(cnt));
		for(int i=0;i<2007;i++)
			V[i].clear();
		int n, m;
		cin >> n >> m;
		
		int tmp1, tmp2, cost;
		for(int i=0;i<m;i++){
			cin >> tmp1 >> tmp2 >> cost;
			V[tmp1].pb(mk(tmp2, cost));
		}
		
		
		
		bool poss = true;
		for(int i=0;i<n;i++)
			dist[i] = INF;
			
		dist[0] = 0;
		queue <int> q;
		q.push(0);
		while(!q.empty()){
			int x = q.front();
			q.pop();
			if(++cnt[x] > n-1){
				cout << "possible" << endl; //negative cycle
				poss = false;
				break;
			}
			if(dist[x] != INF){
				for(int i=0;i<(int)V[x].size();i++){
					int y = V[x][i].fi;
					int c = V[x][i].se;
					if(dist[y] > dist[x] + c){
						dist[y] = dist[x] + c;
						q.push(y);
					}
				}
			}
		}
		if(poss)
			cout << "not possible" << endl; //no negative cycle
	}
}
