//26719883      Estevam     110A - 20   GNU C++11   Accepted    30 ms   2048 KB     2017-04-28 16:18:04
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;


int main(void){
	fastcin;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

    long long n, i, j;
    cin >> n;
    int lucky = 0;
    while(n != 0){
    	if(n%10 == 4 || n%10 == 7)
    		lucky++;
    	n /= 10;
    }
    if (lucky == 4 || lucky == 7)
    	printf("YES\n");
    else
    	printf("NO\n");

    return 0;
}