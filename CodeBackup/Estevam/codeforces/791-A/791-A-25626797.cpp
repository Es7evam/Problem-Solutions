#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;

const double PI = acos(-1.0);
//Não mudar daqui pra cima :)

const int N = 1000; //de acordo com problema

int main(void){
    int n, p1, p2, i = 0;
    scanf("%d %d", &p1, &p2);

    while(!(p1 > p2)){
    	p1 *= 3;
    	p2 *= 2;
    	i++;
    }
    
    printf("%d\n", i);
    return 0;
}