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

int n, k;
ll sum;
int a[1007];

bool checker(int tam){
	int cur = tam;
	int count = 0;
	for(int i=0;i<=n;i++){
		if(cur - a[i] < 0){
			count++;
			cur = tam;
			i--;
		}else{
			cur -= a[i];
		}
		if(count > k){
			return false;
		}
	}
	return true;
}

ll minansw = 0x3f3f3f3f;
int run = 0;

void go(ll l, ll r){
	ll mid = (l+r)/2;
	if(run > 10000)
		return;
	run++;
	if(checker(mid)){
		minansw = min(minansw, mid);
		go(l, mid);
	}else{
		go(mid+1, r);
	}
}

int main(void){
	while(cin >> n >> k){
		minansw = 0x3f3f3f3f, run = 0, sum = 0;
		memset(a, 0, sizeof(a));
		for(int i=0;i<=n;i++){
			cin >> a[i];
			sum += a[i];
		}
		ll l = 0;
		go(l, sum);
		cout << minansw << endl;
	}
}
