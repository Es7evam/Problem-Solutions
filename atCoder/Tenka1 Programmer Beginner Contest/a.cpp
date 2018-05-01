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

int main (void) {
  	fastcin;
  	string n;
  	cin >> n;
  	int cnt = 0;
  	for(int i=0;i<n.size();i++)
  		if(n[i] == '1')
  			cnt++;

  	cout << cnt << endl;

  
	return 0;
}
