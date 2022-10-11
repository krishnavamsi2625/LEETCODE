class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(first>=nums[i])
            {
                first=nums[i];
            }
            else if(second>=nums[i])
            {
                second=nums[i];
            }
            else
            {
                return 1;
            }
        }
        return 0;
    }
};