class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<pair<int,int>> v;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
            }
        }
       for(auto x:v)
    {
        for(int i=0;i<row;i++)
        {
            matrix[i][x.second]=0;
        }
        for(int i=0;i<col;i++)
        {
            matrix[x.first][i]=0;
        }
    }

    }
};