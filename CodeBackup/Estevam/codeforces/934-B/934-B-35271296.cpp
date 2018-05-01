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
  	int k;
  	cin >> k;
  	queue <char> st;
  	if(k == 0){
  		cout << 1 << endl;
  		return 0;
  	}

  	while(k>=2){
  		st.push('8');
  		k -= 2;
  	}
  	if(k == 1)
  		st.push('4');

  	if(st.size() > 18){
  		cout << -1 << endl;
  		return 0;
  	}
  	while(!st.empty()){
  		char a = st.front();
  		cout << a;
  		st.pop();
  	}
  	cout << endl;

  
  
	return 0;
}