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

//https://en.wikipedia.org/wiki/Edit_distance

//m, n dp;
int dp[2007][2007];
int main(void){
    fastcin;
    string str1, str2;
    int t;
    cin >> t;
    while(t--){
        cin >> str1 >> str2;
        memset(dp, 0, sizeof(dp));
        for(int i=1;i<=str1.size();i++){
            dp[i][0] = i; //first string to empty one
        }
        for(int i=1;i<=str2.size();i++){
            dp[0][i] = i; //second string to empty one
        }
        for(int i=1;i<=str1.size();i++){
            for(int j=1;j<=str2.size();j++){
                if(str1[i-1] == str2[j-1]) //strings 0 based
                    dp[i][j] = dp[i-1][j-1]; //no operation
                else{
                    dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+1));
                        //          del             insert          subst
                }
            }
        }
        cout << dp[str1.size()][str2.size()] << endl;
    }
}
