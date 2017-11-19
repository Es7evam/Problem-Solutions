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

int n;
vector <int> v;
set <int> st;

int main (void) {
  	fastcin;
  	cin >> n;
  	int a;
  	for(int i=0;i<n;i++){
  		cin >> a;
  		v.pb(a);
      st.insert(a);
  	}

  	bool notpossible = false;
		int gcd;
		gcd = v[0];
		for(int j=1;j<n;j++){
			gcd = __gcd(gcd, v[j]);
			if(st.count(gcd) == 0){
				notpossible = true;
				break;
			}
		}

  	if(notpossible){
  		cout << "-1" << endl;
  	}else{
  		cout << v.size()*2 << endl;
  		for(auto elem:v)
  			cout << elem << " " << gcd << " ";
  		cout << endl;
  	}

	return 0;
}
