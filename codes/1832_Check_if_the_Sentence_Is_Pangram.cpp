class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        bool checker[126]={0};
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                continue;
            }
            checker[sentence[i]]=1;
        }
        for(int i='a';i<='z';i++)
        {
            if(checker[i]==0)
            {
                return 0;
            }
        }
        return 1;
    }
};