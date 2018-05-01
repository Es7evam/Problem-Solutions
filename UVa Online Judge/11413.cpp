#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <queue>
#include <stack>
#include <bitset>
#include <cstring>
#include <math.h>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

int v[1007],n,m;

bool poss(int limit){
    int cnt=1;
    int run=0;   // current run
    int i;
    for (i=0;i<n;i++){
        if(run+v[i]> limit ){ 
            run=v[i]; 
            cnt++; 
            if (cnt > m) return false;
        }
        else 
			run+=v[i];
    }

    return true;
}

int main(){
    while(cin >> n >> m){
        int l=0, r, i;
        int sum = 0;
        for (i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
            if (v[i]>l) 
				l = v[i];
        }

        r = sum;
        while (l<r){
            int mid =(l+r)/2;
            if (poss(mid)) 
				r = mid;
            else l = mid+1;
        }
        cout << r << endl;
    }
}
