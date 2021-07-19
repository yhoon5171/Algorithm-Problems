//https://leetcode.com/problems/island-perimeter/

class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    void dfs(vector<vector<int>>& grid, int x, int y, int &count){
        grid[x][y] = -1;
        for (int i = 0; i < 4; i++){
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size()){
                if (grid[nx][ny] == 1)
                    dfs(grid, nx, ny, count);
                else if (grid[nx][ny] == 0) count++;
            }
            else count++;
        }
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int i, j;
        int count = 0;
        for (i = 0; i < grid.size(); i++)
            for (j = 0; j < grid[i].size();j++)
                if (grid[i][j] == 1) 
                    dfs(grid, i, j, count);


        cout << count;
        return count;
    }
};
