class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int> db; 
        for(int i=0;i<nums.size();i++)
        {
             if(db.count(nums[i]))
             {
                 if(abs(i-db[nums[i]])<=k)
                 {
                     return true;
                 }
             }
            db[nums[i]]=i;
         }
        return false;
        
    }
};