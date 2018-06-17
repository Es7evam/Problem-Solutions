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

map<int, int> indeg;
int vis[107];
vector<int> v[107];

int main(void){
    int n,m;
    while(cin >> n >> m){
        if(n == 0 && m == 0)
            return 0;
        for(int i=0;i<101;i++)
            v[i].clear();

        indeg.clear();
        memset(vis, 0, sizeof(vis));

        int a, b;
        for(int i=0;i<m;i++){
            cin >> a >> b;
            v[a].pb(b);
            indeg[b]++;
        }
        stack<int> q;
        for(int i=1;i<=n;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curr = q.top();
            q.pop();
            if(!vis[curr]){
                cout << curr << " ";
                vis[curr] = 1;
            }
            for(auto adj : v[curr]){
                if((--indeg[adj]) == 0)
                    q.push(adj);
            }
        }
        cout << endl;
    }
}
