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
//int dp[]

int n;
map<ll, int> mp;
bool printed = false;

int go(ll cur, vector<ll> answ){
    //cerr << "\ttam = " << answ.size() << endl;
    if(answ.size() == n){
        cout << answ[0];
        for(int i=1;i<n;i++){
            cout << " " << answ[i];
        }
        printed = true;
    }
    if(printed)
        return 1;
    int maxansw = 0;
    if(cur%3 == 0){
        if(mp[cur/3] != 0){
            mp[cur/3]--;
            answ.pb(cur/3);
            maxansw = max(maxansw, go(cur/3, answ));
            mp[cur/3]++;
            answ.pop_back();
        }
    }
    if(mp[cur*2] != 0){
        mp[cur*2]--;
        answ.pb(cur*2);
        maxansw = max(maxansw, go(cur*2, answ));
        mp[cur*2]++;
        answ.pop_back();
    }
}

int main (void) {
  	fastcin;
    cin >> n;
    ll v[107];
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    map<ll,int> tmpmp;
    vector<ll> answ;
    for(int i=0;i<n;i++){
        ll cur = v[i];
        //cerr << "cur = " << cur << endl;
        int cnt = 0;
        answ.clear();
        answ.pb(cur);
        if(!printed){
            go(cur, answ);
        }
    }
    if(!printed)
        cout << -1;
    cout << endl;

    //vector <ll> answ;




	return 0;
}
