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

const int MOD = 1000000007;
const int N = 2007;

//dp[i][j] nro good seq tam i termina em j.
ll dp[N][N];
vector <int> divis[N];

int go(int tam, int m){
    if(tam == 1) 
    	return 1;
    if(dp[tam][m] != -1) 
    	return dp[tam][m];

    ll n = divis[m].size();
    ll ret = 0;

    for(int i = 0; i < n; i++)
        ret = (ret + go(tam-1, divis[m][i])) % MOD;

    dp[tam][m] = ret;
    return ret;
}


int main (void) {
  	fastcin;
  	int n,k;
  	cin >> n >> k;

  	ll answ = 0;


	for(int i = 1; i <= n; i++)
   		for(int j = i; j <= n; j += i)
   			divis[j].pb(i);

   	memset(dp, -1, sizeof(dp));

   	for(int i=1;i<=n;i++){
   		answ += go(k, i) % MOD;
   	}
   	answ = answ % MOD;
   	/*
	for(int i = 0; i <= n; i++){
		for(int j = 0;j <= n; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << answ << endl;
	return 0;
}