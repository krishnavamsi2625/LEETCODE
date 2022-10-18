class Solution {
public:
    string countAndSay(int n) {
        int i=1;
        string ans="1";
        string temp=ans;
        while(i<n)
        {   int j=0,c=1;
            temp="";
            while(j<ans.size())
            {
                while(j<ans.size()-1 && ans[j+1]==ans[j])
                {
                    c++;
                    j++;
                }
                
                temp+=to_string(c)+ans[j];
                c=1;
                j++;
            }
         ans=temp;
         cout<<ans<<endl;
            i++;
        }
        return ans;
    }
};