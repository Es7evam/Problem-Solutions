//30811423	2017-09-28 20:06:32	Estevam	118B - Present from Lena	GNU C++11	Accepted	30 ms	0 KB

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
	int n;
	cin >> n;
	int spaces = n * 2;
	for(int i=0;i<=n;i++){
		for(int j=0;j<spaces;j++)
			cout << " ";
		spaces -= 2;
		for(int j=0;j<i;j++)
			cout << j << " ";
		for(int j=i;j>0;j--)
			cout << j << " ";
		
		cout << 0 << endl;
			 
	}
	spaces += 2;
	for(int i=n-1;i>=0;i--){
		spaces += 2;
		for(int j=0;j<spaces;j++)
			cout << " ";
		for(int j=0;j<i;j++)
			cout << j << " ";
		for(int j=i;j>0;j--)
			cout << j << " ";
		
		cout << 0 << endl;
			 
	}
	
	return 0;
}
