class Solution {
public:
    bool isPalindrome(int x) {
         long long ans = 0;
        int temp=x;
        while (temp != 0) {
            int digit = temp % 10;
            ans = ans * 10 + digit;

            temp = temp / 10;
        }
        if(x>=0 && x==(int)ans)
        {
            return true;
        }
        else return false;
    }
};