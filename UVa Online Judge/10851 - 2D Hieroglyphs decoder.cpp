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
    string s;
    string g[20];
    int t, i;
    
    cin >> t;
    while(t--){
        int n=0;
        for(int w=0;w<10;w++)
            cin >> g[w];
        
            
        for(int j=1;j<g[0].size();j++){
            for(int k=32;k<128;k++){
                for(i=1;i<=8;i++){
                    if(g[i][j] == '\\'){
                        if(k/(1<<(i-1))%2 == 0)
                            break;
                    }else{
                        if(k/(1<<(i-1))%2)
                            break;
                    }
                    
                }
                if(i == 9)
                    cout << (char)k;
                    
            }   
        }
        cout << endl;
    }
  
    return 0;
}
