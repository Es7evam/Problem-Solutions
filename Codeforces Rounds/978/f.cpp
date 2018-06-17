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

vector <pair<ll, ll>> r;
ll answ[200007];

int main(void){
    ll n, k;
    cin >> n >> k;
    ll a, b;
    for(ll i=0;i<n;i++){
        cin >> a;
        r.pb(mk(a, i));
    }
    for(ll i=0;i<k;i++){
        cin >> a >> b;
        if(r[a-1].fi > r[b-1].fi){
            answ[a-1]--;
        }
        if(r[a-1].fi < r[b-1].fi){
            answ[b-1]--;
        }
    }
    sort(r.begin(), r.end());
    ll passed = 0;
    ll last = -1;
    for(ll i=0;i<n;i++){
        pair<ll,ll> curp;
        curp = r[i];
        if(curp.fi == last){
            answ[curp.se] += passed;
        }else{
            passed = i;
            answ[curp.se] += passed;
        }
        last = curp.fi;
    }
    for(ll i=0;i<n;i++)
        if(answ[i] < 0)
            cout << 0 << endl;
        else
            cout << answ[i] << " ";
    cout << endl;
}
