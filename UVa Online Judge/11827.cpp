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

int v[107];
int main(void){
	int t;
	cin >> t;
	string input;
	getline(cin, input);
	while(t--){
		getline(cin, input);
		stringstream ss(input);
		int i = 0;
		int inp;
		while(ss >> inp){
			v[i++] = inp;
		}
		int n = i;
		int maxx = -0x3f3f3f3f;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i != j)
					maxx = max(maxx, __gcd(v[i], v[j]));
			}
		}
		cout << maxx << endl;
	}
	
}
