class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty())
        { 
            int node=q.front();
            q.pop();
            for(int nei:rooms[node]) 
            {
                if(!visited[nei])
                {
                    q.push(nei);
                    visited[nei]=true;
                }
            }           
        }
        int c=0;
        for(bool vis:visited)
        {
            if(!vis)
              return false;
        }
        return true;        
    }
};