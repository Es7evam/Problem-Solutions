#include <bits/stdc++.h>
using namespace std;


int N = 500;
int main(void){
    int n, i, k;
    scanf("%d %d", &n, &k);
    int cost = 0;
    int tempo = 240 - k;
    i = 1;
    int solv = 0;
    while(cost <= tempo && i <= n){
    	cost += 5*i;
    	i++;
    	if(cost <= tempo)
            solv++;
    }

    printf("%d", solv);


    return 0;
}