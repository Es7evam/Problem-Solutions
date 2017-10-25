//31695815 	2017-10-25 03:07:08 	Estevam 	363B - Fence 	GNU C++11 	Accepted 	109 ms 	1200 KB
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

int sum[150007];
int v[150007];

int main (void) {
  	fastcin;
  	int minsum = INF;

  	int n,k;

  	cin >> n >> k;
  	for(int i=0;i<n;i++)
  		cin >> v[i];

  	sum[0] = v[0];
  	for(int i=1;i<k;i++){
  		sum[i] = sum[i-1] + v[i];
  	}

  	for(int i=k;i<n;i++){
  		sum[i] = sum[i-1] - v[i-k] + v[i];
  	}

  	int indMin;
  	for(int i=k-1;i<n;i++){
  		if(sum[i] < minsum){
  			indMin = i;
  			minsum = sum[i];
  		}
  	}

  	cout << indMin - k + 2 << endl;
  
	return 0;
}
