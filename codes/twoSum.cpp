//O(n^2) time complexity
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> t;
//        for(int i=0;i<nums.size();i++)
//        {   
//            int f=0;
//            for(int j=i+1;j<nums.size();j++)
//            {
//                if(nums[i]+nums[j]==target)
//                {
//                  t.push_back(i);
//                  t.push_back(j);
//                  f=1;
//                  break;
//                }
//            }
//            if(f)
//            break;
//          }
//        return t;
//        
//    }
//};


//O(n) Time complexity
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> db;
        vector<int> t;
        for(int i=0;i<nums.size();i++)
        {
            if(db.count(target-nums[i]))
            {
                
                t.push_back(db[target-nums[i]]);
                t.push_back(i);
                return t;
            }
            db[nums[i]]=i;
        }
        return t;
        
    }
};
