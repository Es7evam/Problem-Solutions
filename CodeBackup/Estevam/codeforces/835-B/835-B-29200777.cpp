#include <bits/stdc++.h>
using namespace std;
int qnt[15];

int main(void){
	int n;
	string str;
	cin >> n;
	cin >> str;
	int sum = 0 ;
	for(int i=0;i<str.size();i++){
		sum += (int)str[i] - '0';
		qnt[(int)str[i] - '0']++;
	}
    int i = 0, j = 0;
    n -= sum;
    while(n > 0){
    	if(qnt[i] > 0){
 			n -= (9-i);
 			qnt[i]--;
 			j++;   		
    	}else
    		i++;
    }
    cout << j << endl;
    
	return 0;
}