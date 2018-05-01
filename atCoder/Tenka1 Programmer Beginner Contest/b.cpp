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

int v[100007];
int main (void) {
  	fastcin;
  	int n;
  	int a, maxim, maxscore = 0;
  	int answ;
  	cin >> n;
  	for(int i=0;i<n;i++){
  		cin >> a >> maxim;
  		if(a > maxscore){
  			maxscore = a;
  			answ = maxim;
  		}
  	}
  	cout << maxscore + answ << endl;

  
	return 0;
  		
}
