#include <bits/stdc++.h>
using namespace std;
 
vector <pair<int, int>> v;
 
pair <int, int> start;
pair <int, int> ended;
bool used[20]; //pedaço m/2
int n, m;
 
bool go(int prox, int ok){
    if(ok == n){
        if(prox == ended.first)
            return true;
        else
            return false;
    }
    bool a, b;
    bool maxim = false;
    for(int i=0;i<m;i++){
        if(used[i] == false){
            if(v[i].first == prox){
                used[i] = true;
                a = go(v[i].second, ok+1);
                used[i] = false;
            }
            if(v[i].second == prox){
                used[i] = true;
                b = go(v[i].first, ok+1);
                used[i] = false;
            }
        }
        maxim = (a == true || b == true);
        //cout << "a:b - maxim -> " << a << ":" << b << " - " << maxim << endl;
        if(maxim == true)
            return true;
    }
    return false;
}
 
int main(void){
 
    int a, b;
    bool answ;
    while(1){
        v.clear();
        cin >> n >> m;
        if(n == 0)
            break;
        //cout << n << " " << m << endl;
        cin >> a >> b;
        start = make_pair(a, b);
        cin >> a >> b;
        ended = make_pair(a, b);
 
        //cout << "(" << start.first << ", " << start.second << ")" << endl;
       // cout << "(" << ended.first << ", " << ended.second << ")" << endl;
        for(int i=0;i<m;i++){
            cin >> a >> b;
            pair<int, int> p = make_pair(a, b);
            v.push_back(p);            
        }
 
 
        /*for(int i=0;i<m;i++){
            cout << "(" << v[i].first << ", " << v[i].second << ")" << endl;
        }*/
        memset(used, false, sizeof(used));
        answ = go(start.second, 0);
        //if(!answ)
        //  answ = go(used, start.second, 0);
        cout << (answ?"YES":"NO") << endl;
    }
}