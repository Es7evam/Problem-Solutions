#include <bits/stdc++.h>
using namespace std;
int v[5];

int main(void){
	int t, a;
	cin >> t;
	int i=1;
	while(t--){
		for(int i=0;i<3;i++){
			cin >> v[i];
		}
		sort(v, v+3);
		cout << "Case " << i << ": " << v[1] << endl;
		i++;
	}

	return 0;
}