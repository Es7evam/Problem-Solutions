#include <bits/stdc++.h>


int main(void){
	int n,i,aux;
	int lvl;
	scanf("%d", &n);
	int level[n];
	scanf("%d ", &aux);
	for(i=0;i<aux;i++){
		scanf("%d", &lvl);
		level[lvl] = -1;
	}
	scanf("%d", &aux);
	for(i=0;i<aux;i++){
		scanf("%d", &lvl);
		level[lvl] = -1;
	}
	for (i = 1;i <= n; i++){
		if (level[i] != -1){
			printf("Oh, my keyboard!\n");
			return 0;
		}
	}
	printf("I become the guy.\n");
	return 0;
}