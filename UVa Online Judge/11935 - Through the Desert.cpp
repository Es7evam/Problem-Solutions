#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>
#include <cstring>
#include <math.h>
#include <string>
#include <iomanip> // setprecision

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

#define EPS 1e-6
#define maxN 110

int main(){
	string event, input;
	while (getline(cin, input)){
		//cout << input << endl;
		if(input == "0 Fuel consumption 0")
			break;

		stringstream ss(input);
		int x = 0, y = 0, leak = 0, fph = 0;	//fuel per hundred
		double res = 0.0, cur = 0.0;
		string thrash;
		do {
			stringstream ss(input);
			ss >> y >> event;
			//cout << event << ": " << y << endl;
			cur += (y - x) * fph / 100.0;
			cur += (y - x) * leak;
			res = max(res, cur);
			if (event[0] == 'G' && event[1] == 'o')
				break;		//goal
			else if (event[0] == 'L')
				leak++ ;		//leak
			else if (event[0] == 'M')
				leak = 0;		//mechaninc
			else if (event[0] == 'G')
				cur = 0.0;	//gas station
			else
				ss >> thrash >> fph;
			x = y;
		} while (getline(cin, input));

		if(res == 0)
			break;
		cout << fixed << setprecision(3) << res << endl;
	}
	return 0;
}
