#include <bits/stdc++.h>

int main(void){
	int kg, kg1;
	scanf ("%d", &kg);
	if (kg%2 == 0){
		kg1 = kg/2;
		if (kg1%2 == 0 || kg >= 6){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else{
		printf("NO\n");
	}
	return 0;
}