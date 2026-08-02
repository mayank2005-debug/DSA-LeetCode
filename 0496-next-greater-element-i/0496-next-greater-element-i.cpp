class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        for(int i=nums2.size()-1; i>=0; i--)
        {
            while(!s.empty() && s.top()<=nums2[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top());
            }
            s.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        map<int,int> mp;
        for(int i=0; i<nums2.size(); i++)
        {
            mp[nums2[i]]=ans[i];
        }
        vector<int> final;
        for(int i=0;i<nums1.size();i++)
        {
            for(auto x:mp)
            {
                if(x.first==nums1[i])
                {
                    final.push_back(x.second);
                }
            }
        }
        return final;
    }
};