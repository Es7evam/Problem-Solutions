#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define fastcin ios_base::sync_with_stdio(false)

typedef long long ll;
const ll INF = LLONG_MAX;
const double PI = acos(-1.0);

ll a[100];
ll b[100];
ll answ;

int main (void) {
  	fastcin;
	int n, m;
	cin >> n >> m;  
	ll mina = INF;
	ll maxb = -INF;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	ll imax, iansw;

	answ = -INF;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]*b[j]>answ){
                answ=a[i]*b[j];
                iansw=i;
            }
        }
    }
    answ= -INF;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i!=iansw && a[i]*b[j]>answ){
                answ=a[i]*b[j];
            }
        }
    }
    cout<<answ<<endl;
	return 0;
}
