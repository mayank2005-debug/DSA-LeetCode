class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int endrow=matrix.size()-1;
        int endcol=matrix[0].size()-1;
        int strow=0;
        int stcol=0;
        if(endrow==1)
        {
            
        }
        while(strow<=endrow && stcol<=endcol)
        {
            for(int i=stcol; i<= endcol; i++)
            {
                ans.push_back(matrix[strow][i]);
            }
            for(int i=strow+1; i<= endrow; i++)
            {
                ans.push_back(matrix[i][endcol]);
            }
              if(strow < endrow)
            {
                for(int i = endcol - 1; i >= stcol; i--)
                {
                    ans.push_back(matrix[endrow][i]);
                }
            }

            if(stcol < endcol)
            {
                for(int i = endrow - 1; i > strow; i--)
                {
                    ans.push_back(matrix[i][stcol]);
                }
            }
            strow++;
            stcol++;
            endrow--;
            endcol--;
        }
        return ans;
        
    }
};