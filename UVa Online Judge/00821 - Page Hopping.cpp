#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int M[107][107];

int main (void) {
	int N, a, b;
  	fastcin;
 	int caso = 0;
    while(cin >> a >> b) {
        if(a == 0 && b == 0)
        	return 0;

        for(int i = 0; i < 101; i++){
            for(int j = 0; j < 101; j++){
                if(i == j)
                	M[i][j] = 0;
                else
                	M[i][j] = INF;
            }
        }

        N = 0;
        //input
        while(true) {
            N = max(max(N, a), b);
            M[a - 1][b - 1] = 1;
            cin >> a >> b;
            if(a == 0 && b == 0)
            	break;
        }

 		//floyd
        for(int k = 0; k < N; k++)
            for(int i = 0; i < N; i++)
                for(int j = 0; j < N; j++)
                    M[i][j] = min(M[i][j], M[i][k] + M[k][j]);

        int cnt = 0;
        double sum = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++){
                if(i != j && M[i][j] != INF){
                	cnt++;
                	sum += M[i][j];
                }
            }
        }
        cout << fixed; //mostra trailing zeroes
 		cout << "Case " << ++caso << ": average length between pages = " << setprecision(3) << sum/cnt << " clicks" << endl;
    }
	return 0;
}
