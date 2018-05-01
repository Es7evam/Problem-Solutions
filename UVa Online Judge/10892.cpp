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

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
ll v[10007];
int m;

int solve (ll n) {
	int answ = 0;
	for (int i = 0; i < m; i++) {
		for (int j = i; j < m; j++) {
			if (v[i] * v[j] / __gcd(v[i], v[j]) == n)
				answ++;
		}
	}
	return answ;
}

void start (ll k) {
	m = 0;
	ll t = sqrt(k);
	for (ll i = 1; i <= t; i++) {
		if (k % i == 0) {
			v[m++] = i;
			if (k / i != i)
				v[m++] = k / i;
		}
	}
	sort (v, v + m);
}

int main(void){
	int input;
	while(cin >> input){
		start(input);
		int answ = solve(input);
		if(input != 0)
			cout << input << " " << answ << endl;
	}
	
}
