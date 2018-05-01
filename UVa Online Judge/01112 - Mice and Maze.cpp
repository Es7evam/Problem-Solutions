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

vector<pair<int,int>> v[107];
int dist[107];

struct no{
	int cost;
	int curr;
	bool operator() (const no& lhs, const no& rhs){
		return (lhs.cost>rhs.cost);
	}
};

int main(void){
	fastcin;

	int T;
	cin >> T;
	bool first = true;

	while(T--){
		if(!first)
			cout << endl;

		for(int i=0;i<107;i++){
			v[i].clear();
			dist[i] = INF;
		}

		int n,e,t,m;
		cin >> n >> e >> t;
		cin >> m;
		for(int i=0;i<m;i++){
			int a, b, cost;
			cin >> b >> a >> cost;
			pair<int, int> p;
			p.first = b;
			p.second = cost;
			v[a].push_back(p);
		}


		//dijkstra

		priority_queue <no,vector<no>,no> pq;
		no start;
		start.cost = 0;
		start.curr = e;
		dist[e] = 0;
		pq.push(start);

		while(!pq.empty()){
			no currNode = pq.top();
			pq.pop();
			int currCost = currNode.cost;
			int currIndex = currNode.curr;

			if(dist[currIndex]<currCost){
				continue;
			}

			for(int i=0;i<(int)v[currIndex].size();i++){
				int prox = v[currIndex][i].first;
				int custo = v[currIndex][i].second;
				if(dist[prox] > currCost + custo){ //worth
					dist[prox] = currCost + custo;
					no proxNo;
					proxNo.curr = prox;
					proxNo.cost = currCost + custo;
					pq.push(proxNo);
				}
			}
		}

		int sum=0;
		for(int i=1;i<=n;i++){
			if(dist[i]<=t){
				sum++;
			}
		}
		cout << sum << endl;
		first = false;
	}

	return 0;
}
