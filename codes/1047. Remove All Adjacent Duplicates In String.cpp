class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty()&&st.top()==s[i])
            {
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string temp="",ans="";
        while(!st.empty())
        {
            temp+=st.top();
            st.pop();
        }
        for(int i=temp.size()-1;i>-1;i--)
        {
            ans+=temp[i];
        }
        return ans;
    }
};