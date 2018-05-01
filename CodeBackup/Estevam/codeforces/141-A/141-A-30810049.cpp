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
	string a, b, c;
	int freq[1070];
	memset(freq, 0, sizeof(freq));
	cin >> a >> b >> c;
	for(int i=0;i<a.size();i++){
		freq[(a[i] - 'A')]++;
	}
	for(int i=0;i<b.size();i++){
		freq[(b[i] - 'A')]++;
	}
	for(int i=0;i<c.size();i++){
		freq[(c[i] - 'A')]--;
	}
	bool flag = true;
	for(int i=0;i<1000;i++){
		if(freq[i] != 0){
			flag = false;
		}
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}