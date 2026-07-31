class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count=0;
        int i=0;
        if(s.size()==1)
        {
            return 1;
        }
        if(s[0]!=' ')
       {
        if(s.size()==1)
        {
            return 1;
        }
         while(i<s.size() && s[i]!=' ')
        {
            i++;
        }
        return i;
       }
       else
        {
            while(s[i]==' ')
        {
            i++;
        }
          while(i<s.size() && s[i]!=' ')
        {
            i++;
            count++;
        }
        return count;
       }
        
    }
};