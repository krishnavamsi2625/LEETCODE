/*
Time complexity:- O(N.M log M)
M:-number of words;
M:-number of lettertes in each word
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        
        unordered_map<string,vector<string>> db;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            db[temp].push_back(strs[i]);
        }
        int i=0;
        vector<vector<string>>ans(db.size());
        for(auto [key,value]:db)
        {
            cout<<key<<": ";
            for(string x:value)
            {
                ans[i].push_back(x);
            }
            i++;
            cout<<"\n";
        }
        
        
            return ans;
    }
};*/
//Time complexity:- O(N.M)
//M:-number of words;
//M:-number of lettertes in each word
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        ;
        map<vector<int>,vector<string>>db;
        //map<array<int,26>,int>db;
        for(string x:strs)
        {   vector<int> key(26,0);
            for(char y:x)
            {
                key[y-'a']++;
            }
            db[key].push_back(x);
        }
        int i=0;
        vector<vector<string>>ans(db.size());
        for(auto[key,value]:db)
        {
            for(string x:value)
            {
                ans[i].push_back(x);
            }
            i++;
        }
        return ans;
        
        
    }
};
