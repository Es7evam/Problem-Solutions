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

struct edge{
    int f,t,c;
    edge(int a,int b,int co){
        f=a;
        t=b;
        c=co;
    }
};

vector<edge>vec;
vector<int>out;
int n,e;


int comp(edge a,edge b){
    return a.c<b.c;
}

int par[1007];
int find(int a){
    if(a==par[a])
        return a;
    return(par[a]=find(par[a]));
}

void link(int x,int y){
    if(x>y)
        par[y]=x;
    else par[x]=y;
}

void mst(void){
    int i,j,x,y;
    for(i=0; i<e; i++){
        x=find(vec[i].f);
        y=find(vec[i].t);

        if(x!=y)
            link(x,y);
        else
            out.push_back(vec[i].c);
    }
}

int main(void){
	fastcin;
    int t,i,j,f,c;
    while(cin >> n >> e){
        if(n==0 && e==0)
        	return 0;

	    for(int i=0; i<=n; i++)
	        par[i]=i;

	    vec.clear();
	    out.clear();

        for(j=0; j<e; j++){
        	cin >> f >> t >> c;
            vec.push_back(edge(f,t,c));
        }
        sort(vec.begin(),vec.end(),comp);
        mst();

        if(out.size()==0)
        	cout << "forest" << endl;
        else{
            sort(out.begin(),out.end());
            for(i=0; i<out.size()-1; i++)
            	cout << out[i] << " ";
            
            cout << out[out.size()-1] << endl;
        }
    }
    return 0;
}