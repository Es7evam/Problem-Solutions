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

int v[100007];

int n,answ=INF;
int go(int a,int b,int k){
    // cerr << a << " " << b << " " << k << endl;
	if(k > n)
        return 0;

	int t=b-a; // razao
	if(abs(b+t-v[k])>1)
        return INF;

	return go(b, b+t, k+1) + abs(b+t-v[k]);
}

int main(void){
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> v[i];

    if(n <= 2){
        cout << 0 << endl;
        return 0;
    }

	for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
			answ=min(answ, abs(i)+abs(j)+go(v[1]+i, v[2]+j,3));

	if(answ==INF)
        cout << -1 << endl;
    else
        cout << answ;
}
