//https://leetcode.com/problems/flood-fill/

class Solution {
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    
    void changeImage(vector<vector<int>> &image, int sr, int sc, int newColor, vector<vector<int>> &visited){
        int tmp_color = image[sr][sc];
        image[sr][sc] = newColor;
        visited[sr][sc] = 1;
        for (int i = 0; i < 4; i++){
            int nx = dx[i] + sr;
            int ny = dy[i] + sc;
            if (nx >= 0 && ny >= 0 && nx < image.size() && ny < image[0].size() && visited[nx][ny] != 1){
                if (image[nx][ny] == tmp_color)
                    changeImage(image, nx, ny, newColor, visited);
            }
        }

        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> visited(image.size(), vector<int>(image[0].size(), 0));
        changeImage(image, sr, sc, newColor, visited);

        return image;
    }
};