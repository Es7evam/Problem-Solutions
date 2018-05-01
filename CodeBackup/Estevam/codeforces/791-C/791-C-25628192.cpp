#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;

const double PI = acos(-1.0);
//Não mudar daqui pra cima :)


vector <string> arr;
int alf[] = {65,97,97,97,97,97,97,97,97}; 
int pos = 1;

string str_make(){
    stringstream t; //classe pra guardar as strings
    alf[pos]++;
    for(int i = 0 ;i < 8 ;i++) 
    	t << char(alf[i]);

    if(alf[pos] == 'z')
    	pos++;

    return t.str();
}

void fill_arr(int type, int s, int k){
    for(int i = s; i < k; i++){
        if(i == k-1){
            if(type == 1) 
            	arr[i] = str_make();
            else 
            	arr[i] = arr[s];
        }else 
        	arr[i] = str_make();

    }
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

    int n , k;

    scanf("%d%d",&n,&k);

    arr.resize(n);
    string nome;
    cin >> nome;

    if(nome == "YES")
    	fill_arr(1, 0, k);
    else 
    	fill_arr(0, 0, k);

    for(int i = k;i < n;i++){
        string yesstr;
        cin >> yesstr;
        if(yesstr == "YES") 
        	arr[i] = str_make();
        else 
        	arr[i] = arr[i-k+1];
    }

    for(int i = 0; i < n; i++)
    	cout << arr[i] <<" ";


    return 0;
}