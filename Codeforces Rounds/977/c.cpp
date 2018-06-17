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

int v[200007];
int main (void) {
  	fastcin;
    int n, k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v, v+n);
    int answ;

    if(k == n){
        answ = v[k-1];
    }else{
        if(v[k-1] != v[k]){
            answ = v[k-1];
        }
    }
    if(k == 0)
        answ = v[0] - 1;

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(v[i] <= answ)
            cnt++;
    }

    if(cnt == k && answ != 0)
        cout << answ << endl;
    else
        cout << -1 << endl;

    return 0;
}
