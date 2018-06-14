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

vector<pair<int,int>> v;
int dp[35];
void calc(int i){
	for(int curr=30;curr>=v[i].se;curr--){
		dp[curr] = max(dp[curr], dp[curr-v[i].se] + v[i].fi);
	}
}
int main(void){
	int t;
	cin >> t;
	while(t--){
		for(int i=0;i<35;i++)
			dp[i] = 0;
		v.clear();
		int n;
		cin >> n;
		int a, b;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			v.emplace_back(a,b);//p, w
			calc(i);
		}
		
		int g;
		cin >> g;
		int answ = 0;
		int maxw;
		for(int i=0;i<g;i++){
			cin >> maxw;
			answ += dp[maxw];
		}
		cout << answ << endl;

	}
    return 0;
}
