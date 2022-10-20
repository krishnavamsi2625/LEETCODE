class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>db;
        vector<string> ans;
        int max=INT_MIN;
        for(auto x:words)
        {
            db[x]++;
            if(db[x]>max)
            {
                max=db[x];
            }
        }
        map<int,vector<string>,greater<int>>db2;
        for(auto x:db)
        {
            db2[x.second].push_back(x.first);
        }
        for(auto x:db2)
        {   
            while(ans.size()<k&&!x.second.empty())
            {
                ans.push_back(x.second[0]);
                x.second.erase(x.second.begin());
            }
        }
        return ans;
        
    }
};