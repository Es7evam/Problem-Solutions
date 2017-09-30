#include <bits/stdc++.h>
using namespace std;
int v[100007];

int main(void){
	int t, n, i = 1;
	cin >> t;
	while(t--){
	    memset(v, 0, sizeof(v));
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		sort(v, v + n);
		cout << "Case " << i << ": " << v[n-1] << endl;
		i++;
	}

	return 0;
}
