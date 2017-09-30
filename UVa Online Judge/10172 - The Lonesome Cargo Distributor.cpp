#include <bits/stdc++.h>
using namespace std;

stack<int> carrier;
queue<int> que[100];

int main(void) {
	int set;
	int n, s, q;

	cin >> set;

	while(set--) {
		cin >> n >> s >> q;

		for (int i = 0; i < n; i++) {
			int nc;
			cin >> nc;
			for (int j = 0; j < nc; j++) {
				int target;
				cin >> target;
				que[i].push(target - 1);
			}
		}

		int curr = 0, t = 0;

		while (true) {
			while (!carrier.empty() && (carrier.top() == curr|| que[curr].size() < q)) {	
				if (carrier.top() != curr) {
					que[curr].push(carrier.top());
				}
				carrier.pop();
				t++;
			}

			while ((carrier.size() < s) && !que[curr].empty()) {
				carrier.push(que[curr].front());
				que[curr].pop();
				t++;
			}

			int clr = carrier.empty();

			for (int i = 0; i < n; i++) {
				clr &= que[i].empty();
			}
			if (clr)
				break;

			curr = (curr + 1) % n;
			t += 2;
		}
		cout << t << endl;
		
	}
	return 0;
}