class Solution {
public:
    unordered_map<int,int> db,res;
    int numDecodings(string s) {
        db[s.length()]=1;
        return dfs(s,0);
        
    }
    int dfs (string s,int index)
    {   int res=0;
        if (db.find(index)!=db.end())
        {
            return db[index];
        }
        if(s[index]=='0')
        {
            return 0;
        }
        res=dfs(s,index+1);
        if((index+1)<s.length() && (s[index]=='1' ||s[index]=='2'  && s[index+1]-48<7))
        {   
            res+=dfs(s,index+2);
        }
        db[index]=res;
        return res;
    }
};