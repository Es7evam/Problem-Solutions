#include <bits/stdc++.h>

int main(void){
	long long int n,m,a,flag1,flag2;
	scanf("%lld %lld %lld", &n, &m, &a);
	if (n%a != 0){
		flag1 = n/a + 1;
	}else{
		flag1 = n/a;
	}
	if (m%a != 0){
		flag2 = m/a + 1;
	}else{
		flag2 = m/a;
	}
	printf("%lld \n", flag1 * flag2);

}