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

vector<pair<int, int> > v[207];

int dist[207], n;

void bfs(int st) {
    int inQueue[207], tn;
    int cnt[207], neg[207];
    memset(inQueue, 0, sizeof(inQueue));
    memset(cnt, 0, sizeof(cnt));
    memset(neg, 0, sizeof(neg));

    queue<int> Q;
    dist[st] = 0;
    Q.push(st);

    while(!Q.empty()) {
        tn = Q.front();
        Q.pop();
        inQueue[tn] = 0;

        for(auto it = v[tn].begin(); it != v[tn].end(); it++) {
            if(dist[it->first] > dist[tn] + it->second) {
                dist[it->first] = dist[tn] + it->second;

                if(inQueue[it->first] == 0) {
                    if(++cnt[it->first] >= n+1) {
                        queue<int> nq;
                        nq.push(it->first);
                        neg[it->first] = 1;

                        while(!nq.empty()) {
                            int tn = nq.front();
                            nq.pop();
                            dist[tn] = -INF;
                            for(auto it = v[tn].begin(); it != v[tn].end(); it++) {
                                if(neg[it->first] == 0) {
                                    neg[it->first] = 1;
                                    nq.push(it->first);
                                }
                            }
                        }
                    }

                    if(neg[it->first] == 0) {
                        Q.push(it->first);
                        inQueue[it->first] = 1;
                    }
                }
            }
        }
    }
}


int main(void) {
    fastcin;

    int m, C[207];
    int i, j, x, y;
    int caso = 0;
    while(cin >> n) {
        for(i = 1; i <= n; i++) {
            cin >> C[i];
            dist[i] = INF;
            v[i].clear();
        }

        cin >> m;
        while(m--) {
            cin >> x >> y;
            v[x].pb(mk(y, (C[y]-C[x])*(C[y]-C[x])*(C[y]-C[x]))); // c(diff)³
        }

        cin >> m;
        bfs(1);
        cout << "Set #" << ++caso << endl;
        while(m--) {
            cin >> x;
            if(x <= 0 || x > n || dist[x] < 3 || dist[x] == INF)
                cout << "?" << endl;
            else
                cout << dist[x] << endl;
        }
    }
    return 0;
}
