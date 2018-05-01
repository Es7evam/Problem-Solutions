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

const int MAX = 1000007;
bool prime[MAX];
void isPrime(){
	prime[0] = prime[1] = false;
	prime[2] = true;

	for(int i=4;i<=MAX;i+= 2){
		prime[i] = false;
	}

	for(int i=3;i<=MAX;i+= 2){
		prime[i] = true;
	}
	for(int i=3;i*i<=MAX;i+=2){ //sqrt
		for(int j=2*i;j<=MAX;j+=i){
			prime[j] = false;
		}
	}

}

int main (void) {
  	fastcin;
	isPrime();
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		if(x == (ll)sqrt(x) * (ll)sqrt(x)){
			if(prime[(int)sqrt(x)])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}else
			cout << "NO" << endl;
	}
  
	return 0;
}