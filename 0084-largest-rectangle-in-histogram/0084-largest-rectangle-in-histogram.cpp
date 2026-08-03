class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> right_smaller(n);
        vector<int> left_smaller(n);

        stack<int> s;

        
        for(int i = n - 1; i >= 0; i--)
        {
            while(!s.empty() && heights[s.top()] >= heights[i])
            {
                s.pop();
            }

            if(s.empty())
                right_smaller[i] = n;
            else
                right_smaller[i] = s.top();

            s.push(i);
        }

        while(!s.empty())
            s.pop();

        
        for(int i = 0; i < n; i++)
        {
            while(!s.empty() && heights[s.top()] >= heights[i])
            {
                s.pop();
            }

            if(s.empty())
                left_smaller[i] = -1;
            else
                left_smaller[i] = s.top();

            s.push(i);
        }

        int maxi = 0;

        for(int i = 0; i < n; i++)
        {
            int width = right_smaller[i] - left_smaller[i] - 1;
            int area = heights[i] * width;
            maxi = max(maxi, area);
        }

        return maxi;
    }
};