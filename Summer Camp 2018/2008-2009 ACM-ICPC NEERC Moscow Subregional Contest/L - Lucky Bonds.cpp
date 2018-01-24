#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for (int i=1;i<n;++i)
		cout << '9';
	cout << '8';

	for (int i=1;i<= n;++i)
		cout << '9';
	cout << endl;

	for (int i=1;i<=(n*2)-1; ++i) {
		cout << '9';
	}
	cout << '8' << endl;
	
	return 0;
}
