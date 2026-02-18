class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)
           return true;
        vector<vector<int>> g(n+1);
        for(auto& e: edges)
        {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        vector<bool> v(n,false);
        queue<int> q;
        q.push(source);
        v[source]=true;
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(int node : g[curr])
            {
                if(node==destination)
                   return true;
                if(!v[node])
                {
                    q.push(node);
                    v[node]=true;
                }
            }
        }
        return false;   
    }
};