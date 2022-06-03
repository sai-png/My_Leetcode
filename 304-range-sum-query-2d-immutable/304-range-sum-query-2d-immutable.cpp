class NumMatrix
{
public:
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>> &matrix)
    {
        v = matrix;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                v[i][j] += v[i][j - 1];
            }
        }
       
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int k = 0;
        for (int i = row1; i <= row2; i++)
        {
            if (col1 - 1 >= 0)
            {
                k += v[i][col2] - v[i][col1 - 1];
            }
            else
            {
                k += v[i][col2];
            }
        }
        return k;
    }
};