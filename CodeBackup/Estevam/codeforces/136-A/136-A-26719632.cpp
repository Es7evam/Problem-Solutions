#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;


int main(void){
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

    int n, i, j;
    scanf("%d", &n);
    int v[1000];
    for(i=1;i<=n;i++){
    	scanf("%d", &j);
    	v[j] = i;
    }
    for(i=1;i<=n;i++){
    	printf("%d ", v[i]);
    }


    return 0;
}