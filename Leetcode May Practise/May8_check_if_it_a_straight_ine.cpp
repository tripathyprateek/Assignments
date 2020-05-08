class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinate)
    {
        int diffx2, diffx1, diffy2, diffy1;
        int x, y;
        diffy1 = coordinate[0][1];
        diffx1 = coordinate[0][0];
        diffx2 = coordinate[1][0] - coordinate[0][0];
        diffy2 = coordinate[1][1] - coordinate[0][1];

        for (int i = 2; i < coordinate.size(); i++)
        {
            x = coordinate[i][0];
            y = coordinate[i][1];
            if ((diffx2 * (y - diffy1)) != (x - diffx1) * diffy2)
            {
                return 0;
            }
        }
        return 1;
    }
};