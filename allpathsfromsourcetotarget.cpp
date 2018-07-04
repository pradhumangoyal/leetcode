class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graphs, bool * visited, vector<int> &path , int sv, int ev, int &path_index) {
        if ( sv >= graphs.size())
            return;
        path.push_back(sv);
        visited[sv] = 1;
        if (sv == ev) {
            ans.push_back(path);
            visited[sv] = 0;
            path.pop_back();
            return;
        }
        for (int i = 0; i < graphs[sv].size(); ++i) {
            if (!visited[graphs[sv][i]]) { 
                visited[graphs[sv][i]] = 1;
                cout << graphs[sv][i] << " " ;
                dfs(graphs, visited, path, graphs[sv][i], ev, path_index);
            }
        }
        path.pop_back();
        visited[sv] = 0;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        bool *visited = new bool[graph.size()];
        for(int i  = 0 ; i < graph.size(); ++i) {
            visited[i] = 0;
        }
        int path_index = 0;
        vector<int> path;
        
        dfs(graph, visited,path, 0, graph.size() - 1, path_index);
        return ans;
    }
};