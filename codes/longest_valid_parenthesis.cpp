class Solution {
public:
    int maxs(int x,int y)
    {
        return (x>y)?x:y;
    }
    int longestValidParentheses(string s) {
        stack<int> st;
        int c=0,max=0;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else 
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else 
                {
                    max=maxs(max,i-st.top());
                }
            }
        }
        return max;
        
        
    }
};