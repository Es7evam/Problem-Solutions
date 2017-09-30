#include <bits/stdc++.h>

using namespace std;
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
int n, ans[20] = {1};

bool isPrime(int a){
    for (int n : prime)
        if (n == a) return true;
    return false;
}

void go(int curr, bool visit[]){
    if (curr == n) {
        if (!isPrime(ans[n-1] + 1))
            return;
        cout << "1";
        for (int i = 1; i < n; ++i)
            cout << " " << ans[i];
             
        cout << endl;
        return;
    }
    
    for (int i = 2; i <= n; ++i) {
        if (visit[i]) continue;
        if (isPrime(i + ans[curr - 1])) {
            visit[i] = 1;
            ans[curr] = i;

            go(curr + 1, visit);

            visit[i] = 0;
        }
    }
}

int main(){
	
	int t = 0;
    while (cin >> n) {
        bool visit[20] = {0};
        
        if (t++) 
			cout << endl;
        printf("Case %d:\n", t);
        
        go(1, visit);
    }
    
}
