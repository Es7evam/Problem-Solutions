#include <bits/stdc++.h>
using namespace std;

char a[7][7], b[7][7];

int main() {
	int t, q;
	cin >> t;

	while (t--) {
		scanf("%d", &q);
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> a[j][i];
				if (a[j][i] == '\n')
					j--;
			}
		}
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 5; j++) {
				cin >>b[j][i];
				if (b[j][i] == '\n')
					j--;
			}
		}

		for (int i = 0; i < 5; i++) {
			sort(a[i], a[i] + 6);
			sort(b[i], b[i] + 6);
		}

		char p1, p2, p3, p4, p5;
		int cnt = 0;
		for (int i = 0; i < 6; i++) {
			if (i > 0 && a[0][i] == a[0][i - 1])
				continue;

			for (int j = 0; j < 6; j++) {
				if (j > 0 && a[1][j] == a[1][j - 1])
					continue;

				for (int k = 0; k < 6; k++) {
					if (k > 0 && a[2][k] == a[2][k - 1])
						continue;

					for (int l = 0; l < 6; l++) {
						if (l > 0 && a[3][l] == a[3][l - 1])
							continue;

						for (int m = 0; m < 6; m++) {
							if (m > 0 && a[4][m] == a[4][m - 1])
								continue;

							p1 = a[0][i];
							p2 = a[1][j];
							p3 = a[2][k];
							p4 = a[3][l];
							p5 = a[4][m];
							if (binary_search(b[0], b[0] + 6, p1) && binary_search(b[1], b[1] + 6, p2) && binary_search(b[2], b[2] + 6, p3) && binary_search(b[3], b[3] + 6, p4) && binary_search(b[4], b[4] + 6, p5))
								cnt++;

							if (cnt == q)
								break;
						}
						if (cnt == q)
							break;
					}
					if (cnt == q)
						break;
				}
				if (cnt == q)
					break;
			}
			if (cnt == q)
				break;
		}

		if (cnt == q)
			cout << p1 << p2 << p3 << p4 << p5 << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}