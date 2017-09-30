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

vector<int> v;
int main (void) {
  	fastcin;
  	int n;
  	bool flag = true;
  	while(flag){
  		v.clear();

  		while(true){ //leitura
  			cin >> n;
  			if(n != 0){
	  			v.push_back(n);
  			}
	  		else{
	  			if(v.size() == 0)
	  				return 0;
	  			break;
	  		}
  		}

  		int max = -INF;
  		for(int i=0;i<v.size();i++){
  			if(abs(v[i]) > max)
  				max = abs(v[i]);
  		}
  		int resto, divis;
  		bool flag2;
  		max = 100000;
		for(divis = max;divis > 0;divis--){
  			resto = (v[0]%divis + divis) % divis;
  			flag2 = true;
  			for(int i=0;i<v.size();i++){
  				if(resto != (v[i]%divis + divis) % divis)
  					flag2 = false;
  			}
  			if(flag2){
  				cout << divis << endl; 
  				break;
  			}
				
		}
  	}
  
	return 0;
}