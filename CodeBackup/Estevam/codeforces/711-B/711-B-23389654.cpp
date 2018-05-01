#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef struct Point{
	ll x;
	ll y;
}Point;


int main(void){
	int n;
	int i,j;
	scanf("%d", &n);
    ll M[501][501];
    ll sum, error = 0;

    if(n == 1){
        printf("1");
        return 0;
    }

    Point zero;

    ll wish;

    for(i=0;i<n;i++){
    	sum = 0;
    	for(j=0;j<n;j++){
    		scanf("%lld", &M[i][j]);
    		if(M[i][j] == 0){
    			zero.x = i;
    			zero.y = j;
    			
    		}
    		sum += M[i][j];
    	}
    	if (zero.x == i)
            continue;

        wish = sum;
    }

    ll suposta = wish;

    for(j=0;j<n;j++){
    	wish -= M[zero.x][j];
    }

    M[zero.x][zero.y] = wish;

    for(i=0;i<n;i++){
    	sum = 0;
    	for(j=0;j<n;j++){
    		sum += M[i][j];
		}
		if (sum != suposta){
			printf("-1");
			return 0;
		}
	}	//testando linhas

    for(i=0;i<n;i++){
    	sum = 0;
    	for(j=0;j<n;j++){
    		sum += M[j][i];
		}
		if (sum != suposta){
			printf("-1");
			return 0;
		}
	} // testando colunas

    sum = 0;
    for(i=0;i<n;i++){
        sum += M[i][i];
    } //diagonal 1
    if (sum != suposta){
        printf("-1");
        return 0;
    } 

    sum = 0;
    for(i=0;i<n;i++){
        sum += M[i][n-i-1];
    } //diagonal 2

    if (sum != suposta){
        printf("-1");
        return 0;
    }

   	if(M[zero.x][zero.y] < 1){
   		printf("-1");
   		return 0;
   	}
   	
    printf("%lld", M[zero.x][zero.y]);
    return 0;

}