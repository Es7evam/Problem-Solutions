
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


map <string , int> mp;
set <string> st;

int main (void) {
  	int t;
  	cin >> t;
	string str;
  	getline(cin, str);
  	t++;
  	int tstart = 0;
  	while(t--){
		int qnt = 0;
		mp.clear();
		st.clear();
		while(getline(cin, str)){
			if(str == "")
				break;
			mp[str]++;
			qnt++;
			
		}
		//cout << "Teste " << t << ": qnt:" << qnt << endl;
		for (auto it=mp.begin(); it!=mp.end(); ++it)
			st.insert(it->first);
			
		//qnt--;
		
		for(auto a : st){
			double percent = 100 * (double)mp[a] / qnt;
			cout << a << " ";
			printf("%.4lf\n", percent);
		}
		if(tstart != 0 && t != 0){
			cout << endl;
		}
		tstart = 1;
	}
	return 0;
}
