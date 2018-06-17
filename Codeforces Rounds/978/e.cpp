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
    int n, w;
    cin >> n >> w;
    ll minn = 0, maxx = w;
    ll curr = 0;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        curr += a;
        minn = max(minn, -curr);
        maxx = min(maxx, w - curr);
    }
    ll answ = maxx - minn +1;
    if(minn <= maxx)
        cout <<answ << endl;
    else
        cout << 0 << endl;
    //cout << maxx << " " << maximum;
    return 0;
}
