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

const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int coins[6] = {1, 5, 10, 25, 50};
int dp[7500];

void minCoins(int V){
	dp[0] = 1;
    for(int i=0; i<5; i++){
		for(int j = coins[i]; j<7507;j++)
			dp[j] += dp[j-coins[i]];
    }
}
 
int main(void){
	
    int maxVal = 20;
    minCoins(maxVal);
    int n;
	
    while(cin >> n){
		cout << dp[n] << endl;
	}
    return 0;
}
