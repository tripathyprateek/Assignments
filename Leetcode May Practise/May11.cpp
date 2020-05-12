class Solution
{
public:
    void dfs(vector<vector<int>> &image, int i, int j, int color, int newpaint)
    {
        if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != color)
            return;

        image[i][j] = newpaint;
        dfs(image, i + 1, j, color, newpaint);
        dfs(image, i - 1, j, color, newpaint);
        dfs(image, i, j + 1, color, newpaint);
        dfs(image, i, j - 1, color, newpaint);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        if (image[sr][sc] == newColor)
            return image;

        dfs(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
};