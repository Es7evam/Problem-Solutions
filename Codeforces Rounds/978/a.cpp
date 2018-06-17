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

int v[1006];
map<int, int> mp;
vector<int> answ;
int main(void){
    int n, a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];

        mp[v[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[v[i]] == 1)
            answ.pb(v[i]);
        else
            mp[v[i]]--;
    }
    cout << answ.size() << endl;
    for(auto a : answ)
        cout << a << " ";
    return 0;
}
