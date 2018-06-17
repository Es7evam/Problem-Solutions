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

int dp[207][207];

int main(void){
	int t;
	cin >> t;
	while(t--){
		int m, c;
		cin >> m >> c;
		memset(dp, -1, sizeof(dp));
		vector<vector<int>> v(c);

		int now;
		for(int i=0;i<c;i++){
			int k;
			cin >> k;
			for(int j=0;j<k;j++){
				cin >> now;
				v[i].pb(now);
			}
		}
		for(int j=0;j<=m;j++){
			dp[j][0] = 0;
			for(int w=0;w<c;w++)
				for(int x=0;x<(int)v[w].size();x++){
					int curr = v[w][x];
					if(j >= curr && dp[j-curr][w] != -1)
						dp[j][w+1] = max(dp[j][w+1], dp[j-curr][w] + curr);
				}
		}

		if(dp[m][c] == -1)
			cout << "no solution" << endl;
		else
			cout << dp[m][c] << endl;
	}
}
