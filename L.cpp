#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> capacity;
vector<vector<int>> adj;

int bfs(int s, int t, vector<int> &parent){
    // cout << s << " " << t;
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int,int>> q;
    q.push({s, INFINITY});

    while(!q.empty()){
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for(int next : adj[cur]){
            if(parent[next] == -1 && capacity[cur][next]){
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if(next == t){
                    return new_flow;
                }
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxFlow(int s, int t){
    int flow = 0;
    vector<int> parent(n+1);
    int new_flow;

    while(new_flow = bfs(s, t, parent)){
        flow += new_flow;
        int cur = t;
        cout << cur << " " << flow;
        while(cur != s){
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

int main(){
    int m;
    cin >> n >> m;

    adj = vector<vector<int>>(n+1);
    capacity = vector<vector<int>>(m+1, vector<int>(m+1, 0));

    for(int i = 0; i < m; i++){
        int a, b, f;
        cin >> a >> b >> f;
        adj[a].push_back(b);
        capacity[a][b] = f;
        // adj[b].push_back(a);
        // capacity[b][a] = f;
        
    }

    cout << "\n";

    int res = maxFlow(1, n);

    cout << "\n";
    
    for(int i = 1; i <= n; i++){
        for(auto val : adj[i]){
            cout << i << " " << val << " " << capacity[i][val] << "\n";
        }
    }

    cout << res << "\n";
}