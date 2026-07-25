class Solution {
public:
    int strStr(string haystack, string needle) {
        int  size_needle=needle.size();
        int size_haystack=haystack.size();

        if(size_needle>size_haystack)
        {
            return -1;
        }

        for(int i=0; i<=size_haystack-size_needle; i++)
        {
            if(needle==haystack.substr(i, size_needle))
            {
                return i;
            }
        }
        return -1;
        
    }
};