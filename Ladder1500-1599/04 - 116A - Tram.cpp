//30580913      Estevam     116A - 12   GNU C++11   Accepted    30 ms   8 KB    2017-09-21 17:37:21
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

int main(void){
    int n;
    cin >> n;
    int curr = 0, maxim = 0;
    for(int i=0; i<n;i++){
        int a, b;
        cin >> a >> b;
        curr -= a;
        curr += b;
        maxim = max(maxim, curr);
    }
    cout << maxim << endl;
    return 0;
    
}