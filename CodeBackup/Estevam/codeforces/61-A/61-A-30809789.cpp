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
  	string a, b;
  	cin >> a >> b;
  	
  	
  	int size = a.size();
  	
  	int carry[size+1];
  	memset(carry, 0, sizeof(carry));
  	carry[size] = 0;
  	char str[size+1];
		
  	for(int i = size-1;i>=0;i--){
		if(a[i] == b[i])
			str[i] = carry[i] == 1? '1' : '0';
		else if(a[i] == '1' && b[i] == '1'){
			if(i > 0)
				carry[i-1] = 1;		
		}else if(a[i] == '1' && carry[i] == 1 && b[i] == '0'){
			if(i > 0){
				carry[i-1] = 1;
				str[i] = '0';
			}
		}else if(b[i] == '1' && carry[i] == 1 && a[i] == '0'){
			if(i > 0){
				carry[i-1] = 1;
				str[i] = '0';
			}
		}else if(b[i] == '1' && a[i] == '0')
			str[i] = '1';
		else if(a[i] == '1' && b[i] == '0'){
			str[i] = '1';
		}
			
		
		
	}
	
	for(int i=0;i<sizeof(str)-1;i++)
		cout << str[i];
	cout << endl;
  
	return 0;
}