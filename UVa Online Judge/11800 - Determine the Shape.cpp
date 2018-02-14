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


struct Point{
    int x,y;
} p[7];

int a,b,c,d;
long c1,c2,c3,c4,cheo1,cheo2;

bool Check_songsong(int d1, int c1, int d2, int c2){
    float  v1x,v1y,v2x,v2y;
    v1x = p[d1].x-p[c1].x;
    v1y = p[d1].y-p[c1].y;
    
    v2x = p[d2].x-p[c2].x;
    v2y = p[d2].y-p[c2].y;
    
    if ((-(v1x*v2y) + (v1y*v2x)) == 0) return true;
    
    return false;
}

void Xep(){
    long diffy,diffx,tmpx,tmpy;
    diffy = -(p[b].y-p[a].y);
    diffx = p[b].x-p[a].x;
    
    tmpx = (p[c].x-p[a].x)*diffy + (p[c].y-p[a].y)*diffx;
    tmpy = (p[d].x-p[a].x)*diffy + (p[d].y-p[a].y)*diffx;
    
    if ((tmpx>0 && tmpy<0) || (tmpx<0 && tmpy>0)) { 
        a=1; b=3; c=2; d=4; 
    }
    else{
        diffy = -(p[d].y-p[a].y);
        diffx = p[d].x-p[a].x;
    
        tmpx = (p[b].x-p[a].x)*diffy + (p[b].y-p[a].y) * diffx;
        tmpy = (p[c].x-p[a].x)*diffy + (p[c].y-p[a].y) * diffx;
    
        if ((tmpx>0 && tmpy<0) || (tmpx<0 && tmpy>0)){
            diffy=c;
            c=d;
            d=diffy;
        }
    }
}

void TinhKC(){
    c1 = (long)(pow(p[a].x-p[b].x,2)+pow(p[a].y-p[b].y,2));
    c2 = (long)(pow(p[b].x-p[c].x,2)+pow(p[b].y-p[c].y,2));
    c3 = (long)(pow(p[c].x-p[d].x,2)+pow(p[c].y-p[d].y,2));
    c4 = (long)(pow(p[d].x-p[a].x,2)+pow(p[d].y-p[a].y,2));
    cheo1 = (long)(pow(p[a].x-p[c].x,2)+pow(p[a].y-p[c].y,2));
    cheo2 = (long)(pow(p[b].x-p[d].x,2)+pow(p[b].y-p[d].y,2));
}

int Run(){
    a=1; b=2; c=3; d=4;
    Xep();
    TinhKC();
    
    if (c1==c3 && c2==c4){
        if (c1==c2){
            if (cheo1==cheo2) 
                return 1;
            else 
                return 3;
        }else{
            if (cheo1==cheo2) 
                return 2;
            else 
                return 4;
        }
    }
    else if (Check_songsong(a,b,c,d) || Check_songsong(b,c,d,a)) 
        return 5;

    return 6;
}

int main(void){
    int k, t;
    fastcin;

    cin >> t;
    int caso = 0;
    while(t--){
        for (int i=1;i<5;i++)
            cin >> p[i].x >> p[i].y;

        k=Run();
        cout << "Case "<< ++caso << ": ";
        switch (k){
            case 1: cout << "Square" << endl; break;
            case 2: cout << "Rectangle" << endl; break;
            case 3: cout << "Rhombus" << endl; break;
            case 4: cout << "Parallelogram" << endl; break;
            case 5: cout << "Trapezium" << endl; break;
            case 6: cout << "Ordinary Quadrilateral" << endl; break;
        }
    }
}