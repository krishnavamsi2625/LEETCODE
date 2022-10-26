class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string w1="",w2="";
        for(string x:word1)
        {
            w1+=x;
        }
        for(string x:word2)
        {
            w2+=x;
        }
        cout<<w1<<"|"<<w2;
        return w1==w2;
        
    }
};