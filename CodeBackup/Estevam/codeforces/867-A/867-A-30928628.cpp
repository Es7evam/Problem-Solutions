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
  	string str;
  	int n;
  	cin >> n;
  	cin >> str;
  	int cnt = 0;
  	for(int i=0;i<n-1;i++){
  		if(str[i] == 'F' && str[i+1] == 'S')
  			cnt--;
  		else if(str[i] == 'S' && str[i+1] == 'F')
  			cnt++;

  	}
  
  	if(cnt > 0)
  		cout << "YES" << endl;
  	else
  		cout << "NO" << endl;
	return 0;
}