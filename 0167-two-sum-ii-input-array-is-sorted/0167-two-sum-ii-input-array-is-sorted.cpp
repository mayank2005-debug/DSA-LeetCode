class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        map<int,int> s;
        for(int i=0;i<numbers.size();i++)
        {
            int temp=target-numbers[i];
            if(s.find(temp)!=s.end())
            {
                ans.push_back(i+1);
                ans.push_back(s[temp]+1);
                sort(ans.begin(),ans.end());
                return ans;
            }
            else s[numbers[i]]=i;
        }
        return ans;
    }
};