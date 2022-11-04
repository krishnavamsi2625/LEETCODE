class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        
        int left=0,right=nums.size()-1;
        int mid=(left+right)/2; 
        int ans;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
                //ans=mid;
            }
            else 
            {
                left=mid+1;
                ans=mid+1;
            }
        }
        return left;
    }
};