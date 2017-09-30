#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f
#define fastcin            ios_base::sync_with_stdio(false)
typedef long long ll;

int main(void){
    fastcin;
    int n;
    
    while (cin >> n){
        int numDigits = 1;
        int value = 1 % n;
        
        while (value){
            numDigits++;
            value = ((value * 10) + 1) % n;
        }
        
        cout << numDigits << endl;
    }
}