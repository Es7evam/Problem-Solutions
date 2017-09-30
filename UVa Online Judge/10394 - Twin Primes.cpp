#include bitsstdc++.h
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_basesync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

#define MAXN 10000007

int ehprimo[MAXN+1];

ll _sieve_size;
bitset 20000010 bs;
vector int primo;

void sieve(ll upperbound){
	_sieve_size = upperbound + 1;
	bs.set();
	for(ll i=2; i= _sieve_size;i++){
		if(bs[i]){

			for(ll j = ii;j= _sieve_size;j += i){
				bs[j] = 0;
				
			} 
			primo.push_back((int)i);
		}

	}
}


vector int pairs;
int pares(){
	for(int i=1;iprimo.size();i++){
		if(primo[i]-primo[i-1] == 2){
			cout  entrou  endl;
			pairs.push_back(primo[i-1]);
		}
	}
}


int main (void) {
  	fastcin;
  	int a;
  	sieve(20000007);
  	pares();
  	
  	for(int i=0;i20;i++){
  		cout  primo[i]   ;
  	}
  	for(int i=0;i20;i++){
  		cout  pairs[i]   ;
  	}


  	while(cin  a){
  		cout  (  pairs[a-1]  ,   pairs[a-1] + 2  )  endl; 
  	}
  
	return 0;
}