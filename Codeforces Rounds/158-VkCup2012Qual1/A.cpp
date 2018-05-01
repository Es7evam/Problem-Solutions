//testing new keyboard :DDDD

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

int v[57];

int main (void) {
  	fastcin;
  	int n, k;
  	cin >> n >> k;

  	int answ = 0;
  	for(int i=1;i<=n;i++)
  		cin >> v[i];

  	for(int i=k+1;i<=n;i++){
  		if(v[i] == v[k] && v[k] > 0){
  			answ++;
  		}
  	}
  	for(int i=1;i<=k;i++){
  		if(v[i] > 0){
  			answ++;
  		}
  	}

  	cout << answ << endl;
	return 0;
}
