class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int maxi=count;
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
             for(int j=i; j<s.size(); j++)
            {
                char c=s[j];
                if(mp.find(c)==mp.end())
                {
                    mp[c]++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            maxi=max(maxi,count);
            count=0;
            mp.clear();
        }
        return maxi;
    }
};