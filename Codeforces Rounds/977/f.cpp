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

int v[200007];
int lis[200007];


/* Driver program to test above function */
int main(){
    int n;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    int i, j, max = 0;

    for (i = 0; i < n; i++ )
        lis[i] = 1;

    // Bottom up
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ )
            if (v[i] == v[j]+1 && lis[i] < lis[j] + 1){
                lis[i] = lis[j] + 1;
            }

    int imax = 0;
    int maxtam = 0;
    for (i = 0; i < n; i++ )
        if (maxtam < lis[i]){
            imax = i;
            maxtam = lis[i];
        }

    vector <int> st;
    int cur = maxtam;
    int lastprint = v[imax];
    cout << lastprint << endl;
    for(int i=imax;cur>0 && i>=0;i--){
        if(lis[i] == cur && v[i]+1 == lastprint){
            cur--;
            st.pb(i);
            lastprint = v[i];
        }
    }
    cout << maxtam << endl;

    for(int i=0;i<n;i++){
        cout << lis[i] << " ";
    }
    cout << endl;

    for(int i=st.size()-1;i>=0;i--){
        cout << st[i]+1 << " ";
    }

    return 0;
}
