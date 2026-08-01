class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        }

        sort(nums.begin(),nums.end());
        if(nums.size()==2)
        {
            return nums[1]-nums[0];
        }
        int gap=0;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            gap=nums[i+1]-nums[i];
            maxi=max(maxi,gap);
        }
        return maxi;
    }
};