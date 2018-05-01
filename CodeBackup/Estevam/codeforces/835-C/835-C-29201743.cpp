#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int v[11][11][101];
//Brilho em t = (bright+t)%(c+1)



int main() {
	int n, q, c;
	cin >> n >> q >> c;
	int v[17][107][107];
	memset(v, 0, sizeof(v));
	
	for (int i = 0; i < n; i++) {
		int x, y, s;
		cin >> x >> y >> s;
		v[s][x][y]++;
	}

    for (int p = 0; p <= c; p++)
		for (int i = 1; i < 101; i++)
			for (int j = 1; j < 101; j++) {
				 v[p][i][j] = v[p][i][j] + v[p][i-1][j] + v[p][i][j-1] - v[p][i-1][j-1];
			}
    
    for (int i = 0; i < q; i++) {
		int t, x1, y1, x2, y2;
		cin >> t >> x1 >> y1 >> x2 >> y2;
		long sum = 0;
		for (int p = 0; p <= c; p++) {
			int res = v[p][x2][y2] - v[p][x1-1][y2] - v[p][x2][y1-1] + v[p][x1-1][y1-1];
			sum += ((p+t)%(c+1))*res;
		}
		cout << sum << endl;
	}
    
	return 0;
}