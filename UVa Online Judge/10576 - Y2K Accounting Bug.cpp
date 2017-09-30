#include <bits/stdc++.h>
using namespace std;
int answ = -1;

int go(int s, int d, int v0, int v1, int v2, int v3, int pos, int sum){
	if(pos == 12){
		//if(sum < 0 && sum + s > 0)
		answ = max (answ, sum);
		return answ;
	}
	int a, b;
	if(pos > 3){
		if(v1 + v2 + v3 + v0 + s < 0){
			a = go(s, d, v1, v2, v3, s, pos+1, sum + s);
		}
		if(v1 + v2 + v3 + v0 - d < 0)
			b = go(s, d, v1, v2, v3, -d, pos+1, sum-d);
	}else{
		a = go(s, d, v1, v2, v3, s, pos+1, sum+s);
		b = go(s, d, v1, v2, v3, -d, pos+1, sum-d);
	}

	return max(a, b);
}

int main(void){
	int s, d;
	while(cin >> s >> d){
		go(s, d, 0, 0, 0, 0, 0, 0);
		if(answ == -1)
			cout << "Deficit" << endl;
		else
			cout << answ << endl;
		answ = -1;
	}

	return 0;
}

