#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace std;
using namespace __gnu_pbds;


typedef tree<
pair<int,int>,
null_type,
less<pair<int,int>>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;


set <string> st;
map <string, int> mpID;
map <string, int> mpRely;
map <int, string> idReverse;

ordered_set mtst;

int main(void){
	int N;
	cin >> N;
	int id=0;
	for(int i=0;i<N;i++){
		string str, code;
		cin >> str;
		if(str == "ISSUE"){
			cin >> code;
			if(st.count(code) == 0){
				cout << "CREATED " << id << " 0" << endl;
				idReverse[id] = code;
				mpID[code] = id++;
				st.insert(code);
				mtst.insert(make_pair(0, mpID[code]));
			}else{
				cout << "EXISTS " << mpID[code] << " " << mpRely[code] << endl;
			}
		}
	
		if(str == "DELETE"){
			cin >> code;
			if(st.count(code) == 0){
				cout << "BAD REQUEST" << endl;
			}else{
				st.erase(code);
				mtst.erase(mtst.find(make_pair(-mpRely[code], mpID[code])));
				cout << "OK " << mpID[code] << " " << mpRely[code] << endl;
				mpID[code] = 0;
				mpRely[code] = 0;
			}
		}

		if(str == "RELIABILITY"){
			int m;
			cin >> code >> m;
			if(st.count(code) == 0){
				cout << "BAD REQUEST" << endl;
			}else{
				mtst.erase(mtst.find(make_pair(-mpRely[code], mpID[code])));
				mpRely[code] += m;
				mtst.insert(make_pair(-mpRely[code], mpID[code]));
				cout << "OK " << mpID[code] << " " << mpRely[code] << endl;
			}
		}

		if(str == "FIND"){
			int m;
			cin >> m;

			if(mtst.size() == 0){
				cout << "EMPTY" << endl;
			}else{
				if(m >= mtst.size()){
					pair <int, int> tmp;
					tmp = *mtst.find_by_order(mtst.size()-1);
					cout << "OK " << idReverse[tmp.second] << " " << tmp.second << " " << -tmp.first << endl;
				}else{
					pair <int, int> tmp = *mtst.find_by_order(m);
					cout << "OK " << idReverse[tmp.second] << " " << tmp.second << " " << -tmp.first << endl;
				}
			}	

		}
	}
	return 0;
}

