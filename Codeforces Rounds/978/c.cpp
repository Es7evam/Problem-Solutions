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

ll rooms[200007];
ll sum[200007];
ll query[200007];

int main(void){
    int n, m;
    cin >> n >> m;
    sum[0] = 0;
    for(int i=1;i<=n;i++){
        cin >> rooms[i];
        sum[i] = sum[i-1] + rooms[i];
    }
    for(int i=0;i<m;i++){
        cin >> query[i];
    }
    int cur = 1;
    for(int i=0;i<m;i++){
        while(query[i] > sum[cur]) cur++;

        cout << cur << " " << query[i] - sum[cur-1] << endl;
    }
    return 0;
}
