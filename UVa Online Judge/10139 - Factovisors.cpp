#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPossible(int n, int prime, int cnt){
    ll primecopy = prime;
    
    while (n / primecopy && cnt > 0){
        cnt -= n / primecopy;
        primecopy *= prime;
    }
    
    return (cnt <= 0);
}


int main(void){
    int n, d, cnt, temp;
    bool isDivisor;
    
    while (cin >> n >> d){
        temp = d;
        isDivisor = true;
        
        for (int i = 2; i * i <= d && isDivisor; ++i){
            cnt = 0;
            
            while (d % i == 0){
                d /= i;
                ++cnt;
            } //nro fatore primos
            
            if (cnt > 0)
                isDivisor = isPossible(n, i, cnt);
        }
        
        if (d > 1 && isDivisor)
            isDivisor = isPossible(n, d, 1);
        
        string print;
        if(isDivisor) 
			print = " divides ";
		else
			print = " does not divide ";
			
        cout << temp << print << n << "!" << endl;
    }
}
