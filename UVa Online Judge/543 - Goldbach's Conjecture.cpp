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

int isprime[1000007];

void findprime(){
	int n=1000007;
	int i,j;
	isprime[0] = isprime[1] = 0;
	isprime[2] = 1;
	for(int i=3;i<n;i++)
		isprime[i] = i%2;
		
	for(int i=3;i*i <= n;i += 2){
			if(isprime[i])
				for(j = i*i; j<=n;j+= i)
					isprime[j] = 0;
	}
}

int main (void) {
  	fastcin;
  	findprime();
	while(1){
		int n;
		cin >> n;
		if (n == 0)
			return 0;
			
		int i;
		
		for(i = 3;i < n;i+=2){
			if(isprime[i] && isprime[n-i]){
					cout << n << " = " << i << " + " << n-i << endl;
					break;
			}
		}
		if(i>=n)
			cout << "Goldbach's conjecture is wrong" << endl;
		
	}
  
	return 0;
}

