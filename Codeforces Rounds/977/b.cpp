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

map <string, int> mp;

int main (void) {
  	fastcin;
    int n;
    string str;
    cin >> n >> str;
    string tmp;
    for(int i=0;i<n-1;i++){
        tmp = "";
        tmp += str[i];
        tmp += str[i+1];
        mp[tmp]++;
    }
    int max = -1;
    string maxstr;
    for(auto a : mp){
        if(a.se > max){
            maxstr = a.fi;
            max = a.se;
        }
    }
    for(int i=0;i<maxstr.size();i++){
        cout << maxstr[i];
    }
    cout << endl;
	return 0;
}
