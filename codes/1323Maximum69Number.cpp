class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        while(num)
        {
            nums.push_back(num%10);
            num/=10;
        }
        for(int i=nums.size()-1;i>-1;i--)
        {
            //cout<<nums[i];
            if(nums[i]==6)
            {
                nums[i]=9;
                break;
            }
        }
        int ans=0;
        for(int i=nums.size()-1;i>-1;i--)
        {
            ans=ans*10+nums[i];
        }
        return ans;
        
    }
};