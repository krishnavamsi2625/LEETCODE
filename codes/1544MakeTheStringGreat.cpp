class Solution {
public:
    string makeGood(string s) {
        int i=0,n=s.size();
        stack<char>st;
        st.push(s[0]);
        string ans="";
        for(int i=1;i<n;i++)
        {
            if(!st.empty()&&abs(st.top()-s[i])==32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string temp="";
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