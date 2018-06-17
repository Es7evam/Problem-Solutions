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

int adj[507][507];
int v[507];
int main(void){
	int t;
	cin >> t;
	while(t--){
		memset(v, 0, sizeof(v));
		int fire, inter;
		cin >> fire >> inter;
		for(int i=0;i<fire;i++){
			cin >> v[i];
			cout << v[i] << " ";
		}
		cerr << endl;
		int a, b, cost;
		for(int i=0;i<inter;i++){
			cin >> a >> b >> cost;
			adj[a][b] = cost;
			cout << adj[a][b] << " ";
		}
		for(int k=0;k<inter;k++){
			for(int i=0;i<inter;k++){
				for(int j=0;j<inter;j++){
					adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
				}
			}
		}
		for(int i=0;i<inter;i++){for(int j=0;j<inter;j++){
				cout << adj[j][j] << " ";
			}
			cout << endl;
		}
	}
	
}
