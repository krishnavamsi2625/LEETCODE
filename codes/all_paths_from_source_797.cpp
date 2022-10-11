class Solution {
public:
    vector<vector<int>>adj;
    int vertex;
    void searchUtil(int start,int dst,vector<int>path,vector<vector<int>>&allPaths,vector<bool>&visited)
    {
        path.push_back(start);
        if(start==dst)
        {   cout<<"\nhii\n";
            allPaths.push_back(path);
            visited[start]=false;
            return;
        }
        for(int i:adj[start])
        {    
             if(!(visited[i]))
            {   cout<<i<<"#";
                visited[i]=true;
                searchUtil(i,dst,path,allPaths,visited);
            }
        }
        visited[start]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        adj=graph;
        vertex=adj.size();
        vector<vector<int>>allPaths;
        vector<int>path;
        vector<bool>visited(vertex,false);
        visited[0]=true;
        searchUtil(0,vertex-1,path,allPaths,visited);
        return allPaths;
        
        
    }
};