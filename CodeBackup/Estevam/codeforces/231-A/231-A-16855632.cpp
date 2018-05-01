#include <bits/stdc++.h>

int main(void){
	int n, x, i,j,count1 = 0,count2 = 0;
	scanf("%d", &n);
	for (i=0;i<n;i++){
		for (j=0;j<3;j++){
			scanf("%d",&x);
			if (x==1){
				count1++;
			}
			x = 0;
		}
		if (count1 > 1){
			count2++;
		}
		count1 = 0;
	}
	printf("%d\n", count2);
	return 0;
}