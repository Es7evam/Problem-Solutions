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
#include <cmath>
#include <iomanip>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

string bev[107];
char cmd[105], name[105][105];
vector<int> g[105];
map<string, int> R;
int indeg[105] = {};

int main() {
    int n, m, cases = 0;
    int x, y, tn, i;
    while(scanf("%d", &n) == 1) {
        memset(cmd, 0, sizeof(cmd));
        memset(name, 0, sizeof(cmd));
        memset(cmd, 0, sizeof(cmd));
        R.clear();
        for(int i=0;i<101;i++)
            g[i].clear();

        for(i = 0; i < n; i++) {
            cin >> name[i];
            R[name[i]] = i;
        }
        cin >> m;

        while(m--) {
            cin >> cmd;
            x = R[cmd];
            cin >> cmd;
            y = R[cmd];
            g[x].pb(y);
            indeg[y]++;
        }

        priority_queue<int, vector<int>, greater<int> > pq;
        for(i = 0; i < n; i++)
            if(indeg[i] == 0)
                pq.push(i);

        cout << "Case #" << ++cases << ": Dilbert should drink beverages in this order:";
        while(!pq.empty()) {
            tn = pq.top();
            pq.pop();

            for(auto it = g[tn].begin(); it != g[tn].end(); it++) {
                indeg[*it]--;
                if(indeg[*it] == 0)
                    pq.push(*it);
            }
            cout << " " << name[tn];
        }
        cout << "." << endl << endl;
    }
    return 0;
}
