#include <bits/stdc++.h>
using namespace std;

pair<int, int> p[1007];
vector<pair<int,int>> q;

int main(void){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> p[i].first >> p[i].second;

	int tot = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			q.push_back(make_pair(p[i].first + p[j].first, p[i].second + p[j].second));
		}
	}
	sort(q.begin(), q.end());

	if(n <= 3){
		cout << "0" << endl;
		return 0;
	}

	bool flag = false;
	for(int i=0;i<q.size()-1;i++){
		if(q[i] == q[i+1]){
			flag = true;
			break;
		}
	}
	
	if(flag)
		cout << "1" << endl;
	else
		cout << "2" << endl;
	

	return 0;
}
