class Solution {
public:
    bool isVowel(char c)
    {
        c=(char)tolower(c);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
    string reverseVowels(string s) {
        int start=0,end=s.size();
        while(start<end)
        {
            while(start<end && !isVowel(s[start]))
            {
                start++;
            }
            while(start<end && !isVowel(s[end]))
            {
                end--;
            }
            if(start<end)
            {
                char temp=s[start];
                s[start]=s[end];
                s[end]=temp;
                end--;
                start++;
            }
        }
        return s;
    }
};