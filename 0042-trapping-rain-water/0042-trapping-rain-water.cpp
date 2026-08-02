class Solution {
public:
    int trap(vector<int>& heights) {
         vector<int> left(heights.size());
        vector<int> right(heights.size());
        left[0]=heights[0];
        right[heights.size()-1]=heights[heights.size()-1];

        for(int i=1;i<heights.size();i++)
        {
            left[i]=max(heights[i],left[i-1]);
        }

        for(int j=heights.size()-2;j>=0;j--)
        {
            right[j]=max(heights[j],right[j+1]);
        }
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            ans=ans+(min(left[i],right[i])-heights[i]);
        }
        return ans;
    }
};