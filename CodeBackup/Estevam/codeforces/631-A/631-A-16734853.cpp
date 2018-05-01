#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;

int a[maxn];
int b[maxn];
int dpa[maxn][maxn];
int dpb[maxn][maxn];



int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        dpa[i][i]=a[i];
        for(int j=i;j<n-1;j++){
            dpa[i][j+1]=dpa[i][j]|a[j+1];
        }
    }
    for(int i=0;i<n;i++){
        dpb[i][i]=b[i];
        for(int j=i;j<n-1;j++){
            dpb[i][j+1]=dpb[i][j]|b[j+1];
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            mx=max(mx,dpa[i][j]+dpb[i][j]);
        }
    }
    printf("%d\n",mx);
}