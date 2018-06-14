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
int dp[207];
int main(void){
	int t;
	cin >> t;
	while(t--){
		int m, c;
		cin >> m >> c;
		for(int i=0;i<201;i++)
			dp[i] = -1;
		dp[0] = 0;
		for(int i=0;i<c;i++){
			int k;
			cin >> k;
			for(int j=0;j<k;j++){
				int now;
				cin >> now;
				for(int w=0;w<201;w++){
					if(dp[w] != -1){
						dp[w+now] = dp[w]+1;
					}
				}
			}
		}
		for(int j=m;j>=0;j--)
			if(dp[j] == c){
				cout << j << endl;
				break;
			}	
	}
}
