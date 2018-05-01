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

int t[130], d[130], p[130], id[130];
int dp[130][2027];
int n;

int go(int pos, int time){
	if (pos == n)
		return dp[pos][time] = 0;
	
	int& ret = dp[pos][time];
	if (ret != -1)
		return ret;
	
	ret = go(pos+1, time);
	if (time + t[pos] < d[pos]) //save or skip
		ret = max(go(pos+1, time), 
			p[pos] + go(pos+1, time + t[pos]));

	return ret;
}

vector<int> answ;
void getAnsw(int pos, int time){
	if (pos == n) 
		return;

	if (dp[pos][time] == dp[pos+1][time]){
		getAnsw(pos+1, time); //item n pego
	}else{
		answ.pb(id[pos]); //pegou item nro
		getAnsw(pos+1, time + t[pos]);
	}
}

int main(){
	fastcin;
	cin >> n;
	vector<tuple<int, int, int, int> > v;
	for (int i=0;i<n;i++){
		int ttmp, dtmp, ptmp;
		cin >> ttmp >> dtmp >> ptmp;
		v.pb(make_tuple(dtmp, ttmp, ptmp, i+1));
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		tie(d[i], t[i], p[i], id[i]) = v[i];
	
	memset(dp, -1, sizeof(dp));
	cout << go(0,0) << endl;
	getAnsw(0, 0);

	cout << (int)answ.size() << endl;
	for (int i = 0; i < answ.size(); i++)
		cout << answ[i] << " ";
	cout << endl;
	
	return 0;
}