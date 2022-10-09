class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {   
        vector<int> ans;
        int start=0,end=numbers.size()-1;
        int sum=0;
        while(start<end)
        {
            sum=numbers[start]+numbers[end];
            if(sum==target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            if(sum>target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return ans;
        
    }
};