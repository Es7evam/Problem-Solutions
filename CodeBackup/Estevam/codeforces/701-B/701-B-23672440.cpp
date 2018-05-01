#include <bits/stdc++.h>
using namespace std;

int linha[200000];
int coluna[200000];

int main()
{
	int n, m;
	cin >> n >> m;
	long long ans = 1ll*n*n;
	int r = 0, c = 0;
	while(m--)
	{
		int x, y;
		cin >> x >> y;
		if(!linha[x])
			ans -= n-c, linha[x] = 1, ++r;
		if(!coluna[y])
			ans -= n-r, coluna[y] = 1, ++c;
		cout << ans << " ";
	}
	cout << endl;
	return 0;
}