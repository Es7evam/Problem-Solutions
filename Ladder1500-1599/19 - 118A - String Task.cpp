//31512452	2017-10-19 18:30:38	Estevam	118A - String Task	GNU C++11	Accepted	30 ms	2100 KB

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

bool isVowel(char a){
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')
		return true;
	else
		return false;
}

int main (void) {
  	fastcin;
	string str;
	cin >> str;
	for(int i=0;i<str.size();i++){
		if(str[i] >= 'A' && str[i] <= 'Z') 
			str[i] += 'a' - 'A' ;
	}
	string answ = "";
	for(int i=0;i<str.size();i++){
		if(isVowel(str[i]))
			continue;
			answ += ".";
			answ += str[i];
	}
	cout << answ << endl;
	return 0;
}
