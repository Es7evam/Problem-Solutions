#include <bits/stdc++.h>
using namespace std;



int main(void){
	int n, l, k, i;
	double v1, v2;
	cin >> n >> l >> v1 >> v2 >> k;
	int nrogrupos = n / k;


    nrogrupos=n/k;
    if(n % k) //nrogrupos = ceil(n/k)
    	nrogrupos++; 

    double answ = l * (((double)nrogrupos*2.0 - 1.0) * v2 + v1);

    answ = answ / (v2 + ((double)nrogrupos*2.0-1.0)*v1);
    
    answ = answ / v2;

    printf("%.10lf\n",answ);



	return 0;
}