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

vector<int> c[30];
int main (void) {
  	fastcin;
    string str; 
    cin >> str;
    for(int i = 0 ; i < int(str.size()) ; i++) 
        c[str[i]-'a'].pb(i); 

    int answ = str.size(); 
    for(int i = 0 ; i < 26 ; i++ ){  	
        if(c[i].size() != 0) { 
            int curr = c[i][0] + 1; 
            for(int j = 0 ; j < int(c[i].size())-1; j++) 
                curr = max(curr, c[i][j+1] - c[i][j]);

            curr = max(curr, int(str.size()) - c[i][int(c[i].size())-1]);
            answ = min(answ, curr);
        }
    }
    cout << answ << endl;
}
