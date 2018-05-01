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

struct Elevator{
    int id;
    int dest;
    int to;
    int cost;
    bool operator>(const Elevator &e) const{
        return this->cost > e.cost;
    }
};

int main(void){
    int n, k;

    while (cin >> n >> k){
        vector<vector<Elevator> > elevators(107);
        vector<int> time(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> time[i];

        cin.ignore();
        //ignora o char newline do cin, pra poder usar getline

        for (int id = 1; id <= n; id++){
            string s;
            vector<int> floors;
            int andar;

            getline(cin, s);
            stringstream ss(s); //passei mal pra fazer isso aqui
            while (ss >> andar)
                floors.pb(andar);

            for (int j = 0; j < floors.size(); ++j)
                for (int k = j + 1; k < floors.size(); ++k){
                    Elevator e;
                    e.id = id;
                    e.cost = 0;

                    //i to j
                    e.dest = floors[j];
                    e.to = floors[k];
                    elevators[floors[j]].pb(e);

                    // j to i
                    e.dest = floors[k];
                    e.to = floors[j];
                    elevators[floors[k]].pb(e);
                }
        }

        priority_queue<Elevator, vector<Elevator>, greater<Elevator> > pq;
        vector <int> dist(107);
        vector <int> id(107);

        for(int i=0;i<106;i++)
        	dist[i] = id[i] = -1;

        Elevator e;
        e.dest = e.to = e.cost = 0;
        dist[0] = 0;

        pq.push(e);
        while (!pq.empty()){
            Elevator u = pq.top();
            pq.pop();

            if (dist[u.to] != u.cost)
                continue;

            for (int i = 0; i < elevators[u.to].size(); i++){
                Elevator v = elevators[u.to][i];
                int alt = dist[v.dest] + abs(v.to - v.dest) * time[v.id];
                // Switch to another elevator.
                if (id[v.dest] != -1 && id[v.dest] != v.id)
                    alt += 60;

                if (dist[v.to] == -1 || alt < dist[v.to]){
                    dist[v.to] = alt;
                    v.cost = alt;
                    id[v.to] = v.id;
                    pq.push(v);
                }
            }
        }

        dist[k] == -1? cout << "IMPOSSIBLE" << endl : cout << dist[k] << endl;

    }
    return 0;
}
