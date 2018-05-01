#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

//bitwise,curr    , value
map <pair<int,int>, int> mp;
pair <int, int> v[100007];
int n, k;
int go(int bitwiseor, int curr, int value){
	pair<int,int> p;
	p.first = bitwiseor ^ v[curr].first;
	p.second = curr;
	if(mp[p] > value + v[curr].second)
		return mp[p];

	mp[p] = value + v[curr].second;
	if(bitwiseor ^ v[curr].first > k){
		return -INF;
	}
	int maxim;
	if(bitwiseor == (bitwiseor ^ v[curr].first)){
		return go(bitwiseor, curr+1, value + v[curr].second);
	}

	if(mp[bitwiseor] > value)
		return mp[bitwiseor];
	else
		mp[bitwiseor] = value;

	maxim = max(go(bitwiseor, curr+1, value) , go(bitwiseor^v[curr].first, curr+1, value + v[curr].second));

}

int main (void) {
  	fastcin;
  	cin >> n >> k;
  	
	return 0;
}
