class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>db;
        for(int i=0;i<nums.size();i++)
        {
            if(db.count(nums[i]))
            {
                return true;
            }
            db[nums[i]]=1;
        }
        return false;
    }
};