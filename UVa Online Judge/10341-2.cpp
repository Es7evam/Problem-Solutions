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
#include <cmath>
#include <iomanip>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

double p, q, r, s, t, u;
ll sum;
double genansw = -1;
int run = 0;

bool checker(double x){
	double answ = 0;
	answ += p * exp(-x);
	answ += q * sin(x);
	answ += r * cos(x);
	answ += s * (tan(x));
	answ += t * x * x;
	answ += u;
	//cout << x << " : " << answ << endl;
	if(answ > 0.0)
		return true;
	else
		return false;
}

void go(double l, double r){
	double mid = (l+r)/2;
	//genansw = mid;
	
	genansw = mid;
	if(run > 50)
		return;
	run++;
	
	if(checker(l) != checker(mid)){
		go(l, mid);
	}else if(checker(r) != checker(mid)){
		go(mid, r);
	}
}

void test(){
	bool past = checker(-0.01);
	for(double x=0.00; x <= 1.01; x += 0.01){
		if(past != checker(x)){
			go(x-0.01, x);
			//cerr << "Chamou " << x-0.01 << " e " << x << endl;
			break;
		}
	}	
	if(genansw < 0.0001 && genansw > -0.0001){
		cout << "0.0000" << endl;
		return;
	}
	
	if(genansw != -1)
		cout << fixed << setprecision(4) << genansw << endl;
	else
		cout << "No solution" << endl;
}

int main(void){
	while(cin >> p >> q >> r >> s >> t >> u){
		genansw = -1;
		test();
		run = 0;
	}
}

