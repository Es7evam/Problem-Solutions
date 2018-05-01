#include <bits/stdc++.h>
using namespace std;

int v[107];
int main(void){
	int n, k, x;
	cin >> n >> k >> x;
	for(int i=0;i<n;i++)
		cin >> v[i];
	for(int i=n-1;i>n-k-1;i--)
		if(v[i] > x)
			v[i] = x;

	int sum = 0;
	for(int i=0;i<n;i++)
		sum += v[i];

	cout << sum << endl;
}