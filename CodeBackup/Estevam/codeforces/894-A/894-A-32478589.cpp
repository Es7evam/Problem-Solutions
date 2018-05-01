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

string str;
int checknext(int curr, int index){
	if(curr >= str.size())
		return 0;

	int answ = 0;
	if(index == 2 && str[curr] == 'Q')
		return 1;

	if(index == 0){
		if(str[curr] == 'Q'){
			for(int i=curr+1;i<str.size();i++){
				answ += checknext(i, 1);
			}
		}
	}
	if(index == 1){
		if(str[curr] == 'A'){
			for(int i=curr+1;i<str.size();i++){
				answ += checknext(i, 2);
			}
		}
	}
	return answ;
}

int main (void) {
  	fastcin;
  	cin >> str;
  	int answ = 0;
  	for(int i=0;i<str.size();i++){
  		answ += checknext(i, 0);
  	}
  	cout << answ << endl;
	return 0;
}