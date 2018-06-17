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
//1*2^5 = 1<<5
//5*2^1 = 5<<1

int main (void) {
  	fastcin;
    int n,k,i;
    string str;
    cin >> str >> k;
    stringstream ss(str);
    ss >> n;
    string newstr;
    newstr = str;
    while(k--){
        if(str[str.size()-1] == '0'){
            newstr = "";
            for(int i=0;i<str.size()-1;i++){
                newstr += str[i];
            }
            str = newstr;
        }
        else{
            str[str.size()-1] = (char)((int)str[str.size()-1] - 1);
        }
    }
    for(int i=0;i<str.size();i++)
        cout << str[i];
    cout << endl;
	return 0;
}
