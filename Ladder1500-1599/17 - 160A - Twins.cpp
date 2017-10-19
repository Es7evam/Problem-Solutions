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

int v[107];
int main (void) {
  	fastcin;
	int n;
	cin >> n;
	int sum = 0;
	for(int i=0;i<n;i++){
		cin >> v[i];
		sum += v[i];
	}
	sum = sum/2;
	sort(v, v+n);
	int pegou = 0, cnt = 0;
	for(int i=n-1;pegou <= sum;i--){
		pegou += v[i];	
		cnt++;
	}
	cout << cnt << endl;
	

  
	return 0;
}
