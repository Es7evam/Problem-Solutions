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
string str;
int n;


int main(void){
    cin >> n;
    cin >> str;
    int cur = 0;

    int answ = 0;
    for(int i=0;i<n-2;i++){
        if(str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x'){
            cur++;
        }
        else{
            cur=0;
        }
        if(cur > 0)
            answ++;
    }
    cout << answ << endl;
    return 0;
}
