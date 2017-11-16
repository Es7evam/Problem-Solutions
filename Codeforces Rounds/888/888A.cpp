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

int v[1007];
int main (void) {
  	fastcin;
  	int minim = 0, maxim = 0;
  	int n;
  	cin >> n;
  	for (int i = 0; i < n; ++i){
  		cin >> v[i];
  	}
  	for(int i=1;i<n-1;i++){
  		if(v[i] > v[i-1] && v[i] > v[i+1])
  			maxim++;
  		if(v[i] < v[i-1] && v[i] < v[i+1])
  			minim++;
  	}
  	cout << minim + maxim << endl;

  
	return 0;
}
