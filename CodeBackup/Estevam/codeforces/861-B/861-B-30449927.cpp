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

int k[107], f[107];

int main (void) {
  fastcin;
  int n, m;
  cin >> n >> m;  
  int tmp;
    for(int i=0;i<m;i++){
      cin >> k[i];
      k[i]--;
      cin >> f[i];
      f[i]--;
    }
    //v[i] = lugar que está i
    int cnt = 0;
    vector <int> answ;
    for(int val = 1; val < 101; val++){
      bool flag = true;
      for(int i = 0;i < m; i++){
        if(k[i] / val != f[i] && k[i] != 0){
          flag = false;
          break;
        }
      }

      if(flag == true){
        int answer = (n-1) / val;
        answ.pb(answer+1);
      }
    }
    
    int resp;
    resp = answ[0];
    for(int i=0;i<answ.size();i++){
      if(answ[i] != resp){
        cout << -1 << endl;
        return 0;
      }
    }

    cout << answ[0] << endl;


  return 0;
}