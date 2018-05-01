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
const double EPS = 10e-6;

int main (void) {
  	fastcin;
  	ll N;
  	cin >> N;
  	ll n, h, w;
	for(n=1;n<100;n++){
		for(w=1;w<100;w++){
			for(h=1;h<100;h++){
				long double answ = (4*n*h*w)/(n*w+h*w+n*h);
		
				if(N == (4*n*h*w)/(n*w+h*w+n*h)){
					cout << h << " " << n << " " << w << endl;
					return 0;
				}
			}
		}
	}
  	h = ceil(N/4.0);
  	
  	if((ll) N % h == 0){
  		h = h*3;
  		n = h;
  		w = h;
  		cout << h << " "<< n << " " << w << endl;
  		return 0;
  	}

  	long double prox = fabs((1.0/(N/4.0)) - (1.0/h));
  	n = ceil(1.0/prox);
  	//int nansw = ceil(n);
  	w = ceil(1/(prox - (1.0)/n));

  	cout << h << " " << n << " " << w << endl;

  	
  	
  
	return 0;
}
/*
n*w + h*w + n*h / nhw = 2*2/N
N = 4*nhw / (nw + hw + nh)
*/
