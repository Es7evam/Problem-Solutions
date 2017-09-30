#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin            ios_base::sync_with_stdio(false)
typedef long long ll;

int main(void){
    fastcin;
    int a, b, c, t;
    cin>>t;
    while(t--){
        cin >> a >> c;
        if(c%a==0){   
            int b = c/a;
            int prev = 1;
            int mdc = __gcd(a,b);
            while(mdc != prev){
                b *= mdc / prev;
                prev = mdc;
                mdc = __gcd(a,b);
            }
            cout << b << endl;
        }
        else 
            cout << "NO SOLUTION" << endl;
    }

    return 0;
}