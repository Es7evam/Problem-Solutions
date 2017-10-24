//31695642 	2017-10-25 02:44:07 	Estevam 	C - The Child and Toy 	GNU C++11 	Accepted 	15 ms 	0 KB
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

int cost[1007];

int main (void) {
	int n,m;
  	fastcin;
  	cin >> n >> m;
  	for(int i=0;i<n;i++){
  		cin >> cost[i];
  	}
  	int answ = 0;
  	int a, b;
  	for(int i=0;i<m;i++){	
  		cin >> a >> b;		
  		answ += min(cost[a-1], cost[b-1]);
  	}

  	cout << answ << endl;
	return 0;
}
