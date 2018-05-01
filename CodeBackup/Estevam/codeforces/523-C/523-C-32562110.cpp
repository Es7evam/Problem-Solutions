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

int main (void) {
  	fastcin;
  	string name, str;
  	cin >> name;
  	cin >> str;

    int left = str.size();
    int right = 0;
    
    int i=0;
    for(int j = 0; j < str.size(); j++){
        if(name[i] == str[j])
        	i++;

        if(i == name.size()){
        	left = j; 
        	break;
        }
    }

    i = name.size() - 1;
    for(int p = str.size() - 1; p >= 0; p--){
        if(name[i] == str[p]){--i;}
        if(i < 0){right = p; break;}
    }

    cout << ((left < right) ? (right - left) : 0) << endl;

  
  
	return 0;
}