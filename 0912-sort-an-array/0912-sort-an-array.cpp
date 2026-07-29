class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int end)
    {
        int i=start;
        int j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=end)
        {
            if(nums[i]<nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
               temp.push_back(nums[j]);
                j++; 
            }
        }
        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(nums[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[start + i] = temp[i];
        }
    }
    void mergesort(vector<int>& nums,int start,int end)
    {
        if(start<end)
        {
            int mid=start+((end-start)/2);
            mergesort(nums,start,mid);
            mergesort(nums,mid+1,end);
            merge(nums,start,mid,end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int size=nums.size();
        mergesort(nums,0,size-1);
        return nums;
        
    }
};