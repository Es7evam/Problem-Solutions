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


const int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
const int dy[] = {0, -1, 1, 0, -1, 1, -1, 1};
int n, m;
string s[107];

int Visit(int x, int y) {
    if (x<0 || x>=n || y<0 || y>=m || s[x][y] != '*') 
    	return 0; //não estrela

    s[x][y] = '.';
    int cnt = 1;
    for(int i=0;i<8;i++)
        cnt += Visit(x + dx[i], y + dy[i]);

    return cnt;
}

int main(void) {
	fastcin;
    while (cin >> n >> m) {
    	if(n == 0 && m == 0)
    		return 0;

    	for(int i=0;i<n;i++)
	        cin >> s[i];
	    int answ = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0;j < m; j++){
                if (s[i][j]=='*') {
                    int cnt = Visit(i, j);
                    if (cnt == 1) 
                    	answ++;
                }
			}
		}
		cout << answ << endl;
    }
}
