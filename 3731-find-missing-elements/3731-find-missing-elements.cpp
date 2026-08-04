class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        if(nums.empty())
        return ans;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1]==nums[i]+1)
            {
                continue;
            }
            else{
                int curr=nums[i]+1;
            while(curr!=nums[i+1])
            {
                ans.push_back(curr);
                curr+=1;
            }
            }
        }
        return ans;
    }
};