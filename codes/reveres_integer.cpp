class Solution {
public:
    int reverse(int x) 
    {
        int ans=0,rem;
        long y=x;
        if(x<0)
            y=y*-1;
        while(y)
        {   rem=y%10;
            if(ans>INT_MAX/10 ||ans==INT_MAX/10 && rem>INT_MAX%10)
            {
                return 0;
            }
            ans=(ans*10)+rem;
            y=y/10;
        }
        if(x<0)
        {
            return ans*-1;
        }
        return ans;
        
    }
};