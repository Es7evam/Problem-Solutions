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

vector <int> v[207];
pair <int, int> p[207];
void go(int curr, int cor){
    if (cor == 1){
        if(p[curr].second == 1)
            return;
        p[curr].second = 1;
    }
    else if(cor == 0){
        if(p[curr].first == 1)
            return;
        p[curr].first = 1;
    }

    for(auto a: v[curr]){
        if(cor == 1)
            go(a, 0);
        else if(cor == 0)
            go(a, 1);
    }
}

int main (void) {
    fastcin;
    int n, l;
    while(cin >> n){
        memset(v, 0, sizeof(v));
        memset(p, 0, sizeof(p));
        if(n == 0)
            return 0;

        cin >> l;
        int a, b;
        for(int i=0;i<l;i++){
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        go(0, 0);
        bool flag = false;
        for(int i=0;i<n;i++){
            flag = (p[i].first && p[i].second) || flag;
        }

        if(flag)
            cout << "NOT BICOLORABLE." << endl;
        else
            cout << "BICOLORABLE." << endl;
    }
  
  
    return 0;
    
}
