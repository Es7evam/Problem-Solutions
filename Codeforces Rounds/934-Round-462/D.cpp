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

vector<int> quocient;

int main(void){
    ll p;
    int k;
    cin >> p >> k;
    while(p!=0){
        quocient.push_back(p%(-k));
        if(quocient[quocient.size()-1]<0){
            quocient[quocient.size()-1]+=k;
            p=p/(-k)+1;
        } else 
        	p/=-k;
    }
    cout << quocient.size() << endl;

    for(int i=0;i<quocient.size();++i) 
    	cout << quocient[i] << " ";
    cout << endl;
    return 0;
}