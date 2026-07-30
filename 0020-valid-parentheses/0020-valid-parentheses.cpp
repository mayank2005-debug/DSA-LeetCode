class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        int size=s.size()-1;
        while(i<=size)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                st.push(ch);
                i++;
            }
            else if(ch==')')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='(')
                {
                    st.pop();
                    i++;
                }
                else return false;
            }
             else if(ch=='}')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='{')
                {
                    st.pop();
                    i++;
                }
                else return false;
            }
             else if(ch==']')
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()=='[')
                {
                    st.pop();
                    i++;
                }
                else return false;
            }
        }
        if(st.empty())
        {
            return true;
        }
        else return false;

        
    }
};