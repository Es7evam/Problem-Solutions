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
#include <cmath>
#include <iomanip>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

vector<int> adj[107];
vector<int> antec[107];
int vc, cases = 0;
bool first;
bitset<105> initVisited, curVisited;

void go(int u, int del) {
	bitset<105> *visited;
	if (first)
		visited = &initVisited;
	else
		visited = &curVisited;

	visited->set(u);
	if (u == del)
		return;

	for (int a : adj[u]) {
        if (!visited->test(a))
			go(a, del);
	}
}

//sdds camp ime 2017
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n, a;
        cin >> n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a;
                if(a == 1 && i != j){
                    adj[i].pb(j);
                }
            }
        }

		first = true;
		for (int i = 0; i < n; i++)
			initVisited.reset(i);

		go(0, n);
		first = false;

        cout << "Case " << ++cases << ":";

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				curVisited.reset(j);

			go(0, i);
			cout << "\n+";
			for (int j = 0; j < (n*2)-1; j++) {
				cout << "-";
			}
            cout << "+\n|";
			for (int j = 0; j < n; j++) {
				if (initVisited.test(j) && (i == j || !curVisited.test(j)))
					cout << "Y";
				else
					cout << "N";
				cout << "|";
			}
		}
        cout << "\n+";
		for (int j = 0; j < (n*2)-1; j++) {
            cout << "-"; //sdds python
		}
        cout << "+\n";
	}

	return 0;
}
