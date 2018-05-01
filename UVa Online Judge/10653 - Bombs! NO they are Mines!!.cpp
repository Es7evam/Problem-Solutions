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


int M[1007][1007];

const int N = 1007; //matriz 1001x1001
bool vis[N][N];
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
int r, c;

struct cell{
	int fi;
	int se;
	int dist;
};

cell start;
cell dest;


int bfs () {
	queue <cell> q;
	q.push(start);
    while(!q.empty()){
    	cell curr;
    	curr = q.front();
    	q.pop();

    	if(curr.fi == dest.fi && curr.se == dest.se)
    		return curr.dist;

	    for (int d = 0; d < 4; ++d) {
	        int nx = curr.fi + dir[d][0]; //esq e dir (pegar o termo 0 das chaves)
	        int ny = curr.se + dir[d][1]; //cima e baixo (pegar o termo 1 das chaves)
	        if (nx < 0 or ny < 0 or nx >= r or ny >= c)
	        	continue;
	    	if (vis[nx][ny])
	    		continue; //se for true, esquece
	        if (M[nx][ny] == 1)
	        	continue; //se for 1, não chama bfs(nx, ny)

	        cell next;
	        next.fi = nx;
	        next.se = ny;
	        next.dist = curr.dist + 1;
    		vis[next.fi][next.se] = true; //marcando um bool vis
	        q.push(next);
	    }
    }
}


int main (void) {
  	fastcin;

  	while(cin >> r >> c){
	  	if(r == 0 && c == 0)
	  		return 0;
	  	memset(M, 0, sizeof(M));
	  	memset(vis, 0, sizeof(vis));
	  	int nroRow, qnt, qntRow;
		int tmp;
	  	cin >> qnt;
	  	for(int i=0;i<qnt;i++){
	  		cin >> nroRow;
	  		cin >> qntRow;
	  		for(int j=0;j<qntRow;j++){
	  			cin >> tmp;
	  			M[nroRow][tmp] = 1;
	  		}
	  	}
	  	cin >> start.fi >> start.se;
	  	start.dist = 0;
	  	cin >> dest.fi >> dest.se;
	  	cout << bfs() << endl;
  	}



	return 0;
}
