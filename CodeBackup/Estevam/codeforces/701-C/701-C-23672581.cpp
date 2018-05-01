#include <bits/stdc++.h>
const int N = 100005;
using namespace std;

int num[128];
char str[N];

int main(){
	int n;
	int cnt = 0;

    scanf("%d%s",&n, str+1);

    for(int i=1;i<=n;i++) 
    	num[str[i]]++;

    for(int i=0;i<128;i++) 
    	if(num[i]) cnt++;

    memset(num,0,sizeof(num));
    int l = 1,agr = 0;
    int answ = n;

    for(int i=1;i<=n;i++){
        if(!num[str[i]]) 
        	agr++;

        num[str[i]]++;

        while(num[str[l]]>1){
        	num[str[l]]--;
        	l++;
        }

        if(agr==cnt){
            answ = min(answ,i-l+1);
        }

    }

    printf("%d\n",answ);
    return 0;
}