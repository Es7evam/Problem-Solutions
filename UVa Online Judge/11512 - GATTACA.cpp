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
  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;
    int n = s.size(), rep = 0;
    string ans = "";

    vector<string> suffix;
    string t = s;
    suffix.push_back(t);
    while (t.size() > 0) 
      t.erase(t.begin()), suffix.push_back(t);

    sort(suffix.begin(), suffix.end());

    for (int k=1; k<suffix.size(); ++k){
      int i;
      for (i=0; i<suffix[k].size() && i < suffix[k-1].size() && suffix[k][i] == suffix[k-1][i]; ++i);

      if (i > 0){
      	t = suffix[k].substr(0, i);
      	if (t == ans) 
          rep++;
      	else if (i > ans.size() || (i == ans.size() && t < ans)) ans = t, rep = 2;
      }
     
    }


    if (ans.empty()) 
      cout << "No repetitions found!\n";
    else 
      cout << ans << " " << rep << endl;
  }
  return 0;
}