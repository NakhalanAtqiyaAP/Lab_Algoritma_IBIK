#include <bits/stdc++.h>
#include <vector>
#define MAX 10005
#define INF INT_MAX

using namespace std;

vector<pair<int, int>> adj[MAX];
bool vis[MAX];
int dist[MAX];

void dijkstra(int start){
    memset(vis, false, sizeof vis);
    for (int i = 0; i < MAX; i++)
    {
       dist[i] = INF;
       dist[start] = 0;
        
    //    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>  pq;    }
    }
}

int main()
{
    
    return 0;
}