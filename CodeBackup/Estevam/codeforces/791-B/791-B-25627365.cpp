#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin			ios_base::sync_with_stdio(false)
typedef long long ll;
const double PI = acos(-1.0);
//Não mudar daqui pra cima :)
const int N = 150020; //de acordo com problema


ll c[N], p[N];
vector<int> g[N];
bool u[N];

void dfs(ll v, ll cl){
    u[v] = 1;
    c[cl]++;
    p[v] = cl;
    
    for(int i=0;i<g[v].size(); i++){
        int next  = g[v][i];
        if(!u[next]){
            dfs(g[v][i], cl);
        }
    }
}



int main(){
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

	ll n,m,cnt,t;

    scanf("%lld %lld", &n,&m);
    
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d %d", &a,&b);
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
  
    cnt = 0;

    for(int i=0;i<n;i++){
        if(!u[i])
            dfs(i, ++cnt);
        if(g[i].size() != c[p[i]] - 1){
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    

    
    return 0;
}