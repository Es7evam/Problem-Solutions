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
#include <cmath>
#include <iomanip>

using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
typedef long long ll;

vector<int>v[1007];
int vis[1007];
map<int,int> mp;

void go(int curr){
    vis[curr] = 1;
    for(int a : v[curr]){
        if(!vis[a])
            go(a);
    }
}

int main(void){
    int n;
    cin >> n;
    scanf("%*c%*c");
    char chs;
    cin >> chs;

    int nextmap = -1;
    bool first = true;
    while(n--){
        if(!first){
            cout << endl;
        }
        first = false;
        memset(vis, 0, sizeof(vis));
        mp.clear();
        for(int i=0;i<1007;i++)
            v[i].clear();

        string largest;

        //cout << "char: " << chs << endl;

        string str;
        while(cin >> str){
            if(str.size() != 2){
                nextmap = (int)str[0];
                break;
            }
            v[(int)(str[0])].pb((int)(str[1]));
            v[(int)(str[1])].pb((int)(str[0]));
            mp[(int)(str[0])] = mp[(int)(str[1])] = 1;
        }

        if(nextmap != -1){
            for(int i = (int)('A'); i <= nextmap; i++)
                mp[i] = 1;
            nextmap = -1;
        }
        int cnt=0;
        for(int i=0;i<300;i++){
            if(!vis[i] && mp[i]){
                cnt++;
                go(i);
            }
        }
        cout << cnt << endl;
    }
}
