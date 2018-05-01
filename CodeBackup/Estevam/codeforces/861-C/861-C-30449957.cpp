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

bool ehvogal(char a){
	if (a == 'a' || a == 'e' || a == 'i'|| a == 'o'|| a == 'u')
		return true;
	else
		return false;
}

int main (void) {
  	fastcin;
  	string str;
  	cin >> str;
  	queue <int> space;
    if(str.size() < 3){
      cout << str;
      return 0;
    }
  	for(int i=0;i<str.size()-2;i++){
  		if(!(ehvogal(str[i]) || ehvogal(str[i+1]) || ehvogal(str[i+2]))){
        if((((str[i] != str[i+1]) || (str[i+1] != str[i+2])))){
  			 space.push(i);
  			 i++;
          
        }
  		}
  	}
  	for(int i=0;i<str.size();i++){
  		if(space.size() != 0 && space.front() == i){
  			cout << str[i] << str[i+1] << " ";
  			i++;
  			space.pop();
  		}else
  			cout << str[i];
  	}
  	cout << endl;
	return 0;
  		
}