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

int n;
double k;
vector <pair<int, string> v;

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
	string str1, str2;
	while(true){
		cin >> n >> str1 >> str2 >> k;
		v.clear();
		if(n == 0 && k == 0)
			return 0;
		int nextn;
		string nextstr1;
		while(true){
			cin >> nextn >> nextstr1;
			if(str1 == "Fuel")
				v.pb(mk(nextn - n, k/100));
			if(str1 == "Leak")
				v.pb(mk(nextn - n, 1.0);
				
			str2 = "";
			if(nextstr1 == "Goal")
				break;
			if(nextstr1 == "Gas"){
				v.pb(mk(-1, 0);
			}
			n = nextn;
			str1 = nextstr1;
		}
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
