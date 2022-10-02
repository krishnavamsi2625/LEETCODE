class Solution {
public:
    bool isPalindrome(int x) {
        long int sum=0,temp=x;
        if(x<0)
        {
            return false;
        }
        while(temp)
        {   
            sum=(sum*10)+(temp%10);
            temp=temp/10;
        }
        if(x==sum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};