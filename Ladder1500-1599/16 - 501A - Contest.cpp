//31511989	2017-10-19 18:02:01	Estevam	501A - Contest	GNU C++11	Accepted	31 ms	2100 KB
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
	int vaspts, mishapts;
	int pt1, pt2;
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	pt1 = a - (a/250)*c;
	pt1 = max(pt1, (3*a)/10);
	
	pt2 = b - (b/250)*d;
	pt2 = max(pt2, (3*b)/10);
	if(pt1 == pt2)
		cout << "Tie" << endl;
	else if(pt1 > pt2)
		cout << "Misha" << endl;
	if(pt2 > pt1)
		cout << "Vasya" << endl;
	
	return 0;
}
