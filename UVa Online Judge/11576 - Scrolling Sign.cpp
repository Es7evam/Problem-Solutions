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

int main() {
    scanf("%*d");
    string w[2];
    int k, n, i, j, l;
    while(cin >> k >> n) {
        cin >> w[0];
        int ans = n*k, flag = 1;
        for(i= 1; i < n; i++) {
            cin >> w[flag];
            for(j = 0; j < k; j++) {
                for(l = 0; w[!flag][j+l]; l++)
                    if(w[flag][l] != w[!flag][j+l])
                        break;
                if(w[!flag][j+l] == '\0') {
                    ans -= k-j;
                    break;
                }
            }
            flag = !flag;
        }
        cout << ans << endl;
    }
    return 0;
}