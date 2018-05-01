#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, v1, v2, t1, t2;
	cin >> n >> v1 >> v2 >> t1 >> t2;
	int a = n * v1;
	a += 2*t1;
	int b = n * v2;
	b += 2*t2;
	if(b > a)
		cout << "First" << endl;
	else if(a > b)
		cout << "Second" << endl;
	else
		cout << "Friendship" << endl;


	return 0;
}