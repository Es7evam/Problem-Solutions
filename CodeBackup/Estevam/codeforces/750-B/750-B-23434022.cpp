#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, i;
    cin >> n;
    string dir;
    int v;
    int coordx = 0;
    int coordy = 10000;
    bool canmove = true;
    for(i=0;i<n;i++){
    	cin >> v >> dir;
    	if(coordy > 10000 || coordy < -10000)
    		canmove = false;
    	if(coordy == 10000 && dir != "South")
    		canmove = false;
    	if(coordy == -10000 && dir != "North")
    		canmove = false;
    	if(dir == "South")
    		coordy -= v;
    	if(dir == "North")
    		coordy += v;
    	if(dir == "West")
    		coordx += v;
    	if(dir == "East")
    		coordx -= v;

    }


    if(coordy == 10000 && canmove == true)
    	printf("YES\n");
    else
    	printf("NO\n");

    return 0;
}