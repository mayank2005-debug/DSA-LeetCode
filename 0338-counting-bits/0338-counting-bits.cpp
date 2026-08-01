class Solution {
public:

    int countBitsInNumber(int num)
    {
        int count = 0;

        while(num)
        {
            if(num & 1)
                count++;

            num >>= 1;
        }

        return count;
    }

    vector<int> countBits(int n) {

        vector<int> ans;

        for(int i = 0; i <= n; i++)
        {
            ans.push_back(countBitsInNumber(i));
        }

        return ans;
    }
};