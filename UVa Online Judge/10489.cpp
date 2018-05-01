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
	while(t--){
		int n, b;
		cin >> n >> b;
		ll answ = 0;
		for(int i=0;i<b;i++){
			memset(v, 0, sizeof(v));
			int k;
			cin >> k;
			for(int j=0;j<k-1;j++)
				cin >> v[j];
			int smallest;
			cin >> smallest;
			for(int j=k-2;j>=0;j--)
				smallest = (smallest*v[j]) % n;
				
			answ += smallest;
		}
		answ = answ % n;
		cout << answ << endl;
	}
	
}
