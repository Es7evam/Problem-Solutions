#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, trocada = -1;
    cin >> n;
    string sit1[1001];
    for(int i=0;i<n; i++){
        cin >> sit1[i];
    	if (sit1[i][0] == sit1[i][1] && sit1[i][0] == 'O'){
    		if(trocada == -1){
    			sit1[i][0] = '+';
    			sit1[i][1] = '+';
    			trocada = 1;
    		}
    	}
    	if (sit1[i][3] == sit1[i][4] && sit1[i][3] == 'O'){

    		if(trocada == -1){
    			sit1[i][3] = '+';
    			sit1[i][4] = '+';
    			trocada = 1;

    		}
    	}
    }
    if (trocada == -1){
    	printf("NO\n");
    	return 0;
    }
    printf("YES\n");

    for(int i=0;i<n; i++){
        //for(int j=0;j<5;j++)
            //printf("%c", sit1[i][j]);
        cout << sit1[i];
        printf("\n");

    }

    return 0;
}