#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	string str;
	int maxim = 0;
	while(cin >> str){
		int cnt = 0;
		for(int i=0;i<str.size();i++){
			if(str[i] >= 'A' && str[i] <= 'Z')
				cnt++;
		}
		maxim = max(cnt, maxim);

	}
	cout << maxim << endl;

	return 0;
}