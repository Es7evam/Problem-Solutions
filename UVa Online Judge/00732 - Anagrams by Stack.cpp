#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pob pop_back

string a, b;
vector <int> v;
stack<char> s;

char isv(int a){
	if(a)
		return 'i';
	else
		return 'o';
}

void go(int x, int y){
	if(x==a.size() && y==b.size() ){
		cout << (isv(v[0]));
		for(int i=1; i<v.size(); ++i ){
			cout << " " << (isv(v[i]));
		}
		cout << endl;
		return;
	}
	
	if(x<a.size()){//push
		v.pb(1);
		s.push(a[x]);
		go(x+1,y);

		v.pob();
		s.pop();
	}

	if(!s.empty() && y<b.size() && s.top()==b[y]){ //pop
		v.pb(0);
		char ch = s.top();
		s.pop();
		go(x,y+1);

		s.push(ch);
		v.pob();
	}
}

int main(void){
	while(cin >> a >> b){
	    v.clear();
		cout << "[" << endl;
		go(0,0);
		cout << "]" << endl;
	}
	return 0;
}