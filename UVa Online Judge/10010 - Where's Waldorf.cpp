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


char grid[57][57];
char str[57];
int m,n,k;

void upper_to_lower (char* a){
    for (int i=0; a[i]; i++)
        if (a[i]>='A' && a[i]<='Z')
            a[i] += 32;
}
bool Locate (int i, int j){
    int x;
    for (x=1; i-x>=0 && str[x]==grid[i-x][j];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; i+x<m  && str[x]==grid[i+x][j];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; j-x>=0 && str[x]==grid[i][j-x];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; j+x<n  && str[x]==grid[i][j+x];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; i-x>=0 && j-x>=0 && str[x]==grid[i-x][j-x];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; i+x<m  && j-x>=0 && str[x]==grid[i+x][j-x];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; i-x>=0 && j+x<n  && str[x]==grid[i-x][j+x];) {x++; if (str[x]=='\0') return 1;}
    for (x=1; i+x<m  && j+x<n  && str[x]==grid[i+x][j+x];) {x++; if (str[x]=='\0') return 1;}
    return 0;
}
int main(void){
    fastcin;
    int caso;
    cin >> caso;
    while (caso--){
        cin >> m >> n;
        for (int i=0; i<m; i++){
            cin >> grid[i];
            upper_to_lower(grid[i]);
        }
        cin >> k;
        while (k--){
            cin >> str;
            upper_to_lower(str);

            int i,j,ok=0;
            for (i=0; i<m && !ok; i++)
                for (j=0; j<n && !ok; j++)
                        //cout << "entrou aqui" << endl;
                    if (grid[i][j] == str[0] && Locate (i,j)){
                        cout << i+1 << " " << j+1 << endl;
                        ok = 1;
                    }
        }
        if (caso) 
            cout << endl;
    }
    return 0;
}