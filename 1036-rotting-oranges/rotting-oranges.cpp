class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     queue<pair<pair<int, int>, int>> q;
        int rows = grid.size();
        int cols = grid[0].size();
         int fresh = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(grid[i][j] == 2)
                    q.push({{i, j}, 0});
                if(grid[i][j] == 1)
                    fresh++;
            }
        }
        if(fresh == 0) 
        return 0;
        if(q.empty())
         return -1;
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                visited[i][j] = grid[i][j];
            }
        }
        int dr1[] = {-1, 0, 1, 0};
        int dr2[] = {0, 1, 0, -1};
        int time = 0;
        while(!q.empty())
        {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            pair<int, int> index = p.first;
            time = p.second;

            for(int i = 0; i < 4; i++)
            {
                int newrow = dr1[i] + index.first;
                int newcol = dr2[i] + index.second;

                if(newrow >= 0 && newrow < rows && newcol >= 0 && newcol < cols && visited[newrow][newcol] != 2 && visited[newrow][newcol] != 0)
                {
                    q.push({{newrow, newcol}, time+1});
                    visited[newrow][newcol] = 2;
                }
            }
        }
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0;  j < cols; j++)
            {
                if(visited[i][j] == 1)
                    return -1;
            }
        }
        return time ;
    }    
    
};