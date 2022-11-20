class Solution {
public:
    string reverseWords(string s) 
    {
        string temp="";
        stack<string>st;
        for(int i=0;i<s.size();i++)
        {   
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            if(s[i]==' '&&temp!=""||i==s.size()-1 &&temp!="")
            {
                st.push(temp);
                temp="";
                continue;
            }
            
        }
        temp="";
        while(!st.empty())
        {   
            
            temp+=st.top();
            st.pop();
            if(!st.empty())
            {
                temp+=" ";
            }
        }
        return temp;
    }
};