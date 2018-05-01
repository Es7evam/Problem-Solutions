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
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
		cin >> v[i];
		
	v[0] = 0;
	int energy = 0, minEnergy = 0;
	for(int i=1;i<=n;i++){
		energy += -v[i] +v[i-1];
		minEnergy = min(energy, minEnergy);
	}
	
	cout << -1 * minEnergy << endl;
	
  
	return 0;
}