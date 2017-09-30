#include <bits/stdc++.h>
using namespace std;

 
int main (void ){
    int t;
    scanf("%d", &t);
    while (t--) {
        int a;
		vector <int> v;
		queue <vector <int> > q;

		map <vector <int>, int> cnt;
		map <vector <int>, bool> vis;
 
        for ( int i = 0; i < 4; i++ ) {
        	scanf("%d", &a);
            v.push_back (a);
        }
 
        cnt [v] = 0;
        q.push (v);
 
        vector <int> targ; //target
        for ( int i = 0; i < 4; i++ ) {
        	scanf("%d", &a);
            targ.push_back (a);
        }
 
        int n;
        scanf("%d", &n);
 
 		//forbidden
        for ( int i = 0; i < n; i++ ) {
            v.clear ();
            for ( int j = 0; j < 4; j++ ) {
        		scanf("%d", &a);
                v.push_back (a);
            }
            vis[v] = true;
        }
 
        bool ok = false;
 
        while ( !q.empty () ) {
            v.clear ();
            v = q.front ();
            q.pop ();
 
            if ( vis [v] == true ) 
            	continue;
 			
            vis [v] = true;
            if ( v == targ ) {
                ok = true;
                break;
            }
 
            vector <int> child = v;
            for (int i = 0; i < 4; i++) {
                child [i] += 1;
                child [i] %= 10;
                if (vis [child] == false)
                    q.push (child);
                cnt [child] = cnt [v] + 1;
                child = v;
            }
 
            for (int i = 0; i < 4; i++) {
                child [i] -= 1;
                if (child [i] == -1) 
                	child [i] = 9; //mod inverso
                if (vis [child] == false)
                    q.push (child);
                cnt [child] = cnt [v] + 1;
                child = v;
            }
        }

        if (ok) 
        	printf("%d\n", cnt[targ]);
        else 
        	printf("-1\n");

    }
 
    return 0;
}
