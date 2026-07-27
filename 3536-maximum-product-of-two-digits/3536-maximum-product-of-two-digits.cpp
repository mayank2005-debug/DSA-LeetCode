class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n!=0)
        {
            int digit=n%10;
            ans.push_back(digit);
            n=n/10;
        }
        sort(ans.begin(),ans.end());
        int size=ans.size();
        return ans[size-1]*ans[size-2];
    }
};