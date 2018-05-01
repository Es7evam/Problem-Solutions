#include <bits/stdc++.h>
using namespace std;

typedef struct Point{
	int valor;
	int cont;
}Point;

bool acompare(Point lhs, Point rhs) { return lhs.valor < rhs.valor; }

Point a[100];

int main(void){
	int n;
	int pessoas;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i].valor);
		a[i].cont = i+1;
	}
	sort(a, a + n, acompare);
	int i;

	for(i=0;i<(n/2);i++){
		printf("%d %d\n", a[i].cont, a[n-i-1].cont);
	}


	return 0;

}