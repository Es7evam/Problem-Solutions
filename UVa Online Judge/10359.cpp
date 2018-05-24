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

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

int checker(int dist){
	
}

double bb(int run, int l, int r){
	if(++run > 100){
		return (l+r)/2;
	}
	int mid = (l+r)/2;
	if(checker(mid)){
		return bb(run, l, mid);
	}else{
		return bb(run, mid, r);
	}
}
vector<pair<int, int>> poste;
int main(void){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a, b;
		for(int i=0;i<m;i++){
			
		}
		
		
	}
}
