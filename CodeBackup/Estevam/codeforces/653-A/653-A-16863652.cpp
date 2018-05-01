#include <bits/stdc++.h>


bool tambola[1001];

int main(void){
	int n, bola[51],i, contador = 0,tammin;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &bola[i]);
		tambola[bola[i]] = true;
	}
	for (i = 0; i < n; i++){
		if(tambola[bola[i]+1] == true && tambola[bola[i]+2] == true){
			contador += 2;
		}
		if(tambola[bola[i]-2] == true && tambola[bola[i]-1] == true){
			contador += 2;
		}
		if(tambola[bola[i]-1] == true && tambola[bola[i]+1] == true){
			contador += 2;
		}
		if (contador > 1){
			printf("YES\n");
			return 0;
		}
		contador = 0;
	}
	printf("NO\n");
	return 0;
}