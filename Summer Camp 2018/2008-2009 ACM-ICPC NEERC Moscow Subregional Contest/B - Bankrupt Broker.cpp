#include <bits/stdc++.h>
using namespace std;

int main(void){
	int f, a , b, c;
	cin >> f >> a >> b >> c;
	unordered_map<int, int> occurs;
	int n, m;
	cin >> n >> m;
	int t = n * m;
	while(t--){
		int x;
		cin >> x;
		occurs[x]++;
	}

	int tot = 0;
	vector<pair<int, int> > v;
	for(auto p : occurs){
		v.push_back(make_pair(p.second, p.first));

	}

	sort(v.rbegin(), v.rend());

	vector<pair<int, int> > fs;
	for(int i = 0; i < v.size(); i++){
		fs.push_back(make_pair(f, i));
		f = ((a*f+b)%c)+1;
	}

	sort(fs.rbegin(), fs.rend());
	
	vector<pair<int, int> > days;

	for(int i = 0; i < v.size(); i++){
		fs[i].first = v[i].second;
		days.push_back(make_pair(fs[i].second, v[i].second));
	}

	sort(days.begin(), days.end());

	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		cout << days[i].second << " ";
	}
	cout << endl;
}
