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

int v[100007];

int main (void) {
  	fastcin;
	int a, b, c;
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> v[i];
	}
	ll answ = 0;
	int curr = 1;
	for(int i=0;i<m;i++){
		if(v[i] == curr)
			continue;
		if(v[i] > curr){
			answ += v[i] - curr;
		}else{
			answ += n - curr + v[i];
		}
		curr = v[i];
	}
	cout << answ << endl;
	return 0;
}