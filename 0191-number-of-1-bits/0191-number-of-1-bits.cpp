class Solution {
public:
    int hammingWeight(int n) {
        int result;
        int count=0;
        while(n!=0)
        {
            result=n&1;
            if(result==1)
            {
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};