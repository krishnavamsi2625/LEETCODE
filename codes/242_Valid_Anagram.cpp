class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int s1[26]={0};
        int t1[26]={0};
        for(char x:s)
        {
            s1[x-'a']++;
        }
        for(char x:t)
        {
            t1[x-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(s1[i]!=t1[i])
            {
                return false;
            }
        }
        return true;
    }
};