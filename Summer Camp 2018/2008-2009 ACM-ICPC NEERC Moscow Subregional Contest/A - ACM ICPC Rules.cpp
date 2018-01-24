#include <bits/stdc++.h>
using namespace std;

vector <string> v1;
vector <string> v2;
map <string, int> mp;

int main(void){
	int n;
	cin >> n;
	string str1, str2;
	int MSU = 0;

	for(int i=0;i<n;i++){
		cin >> str1 >> str2;
		if(str1 == "SCH")
			continue;
		if(str1 == "MSU"){
			if(MSU < 4){
				MSU++;
				v1.push_back(str1);
				v2.push_back(str2);
			}
		}else{
			if(mp[str1] < 2){
				mp[str1]++;
				v1.push_back(str1);
				v2.push_back(str2);
			}
		}
		if(v1.size() == 10)
			break;
	}
	cout << v1.size() << endl;
	for(int i=0;i<v1.size();i++){
		cout << v1[i] << " " << v2[i] << endl;
	}
	return 0;
}
