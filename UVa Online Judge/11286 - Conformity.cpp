#include <bits/stdc++.h>
using namespace std;

map <vector <int>, int> mp;
int tmp[9];
vector <int> mat[10007];

int main(){
    int n, a;
	while(1){
	    memset(mat, 0, sizeof(mat));
	    mp.clear();
		cin >> n;
		if(n == 0)
			break;

		for(int i=0;i<n;i++){
			for(int j=0;j<5;j++){
				cin >> tmp[j];
			}
			sort(tmp, tmp + 5);
			for(int k=0;k<5;k++){
				mat[i].push_back(tmp[k]);
			}
		}
		/*for(int i=0;i<n;i++){
		    for(int j=0;j<5;j++){
		        cout << mat[i][j] << " ";
		    }
		    cout << endl;
		}*/

		for(int i=0;i<n;i++){
			mp[mat[i]]++;
		}
		int maj = 0;
		for(auto a : mp){
			if(a.second > maj)
				maj = a.second;
		}
		int answ = 0;
		for(auto a : mp){
			if(a.second == maj)
				answ += maj;
		}
		cout << answ << endl;
		/*for(auto a:mp){
		    cout << a.second << " ";
		}
		cout << endl;*/
	
	}
	return 0;
}