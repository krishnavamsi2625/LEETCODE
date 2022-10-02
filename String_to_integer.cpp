class Solution {
public:
    int myAtoi(string s) {
        int l=0;
        while(s[l]==' ')
        {   
            l++;
        }
        if(l>=s.length())
        {
            return 0;
        }
        char sign=s[l];
        if(sign=='+'||sign=='-')
        {
            l++;
        }
        else if(sign<'0'||sign >'9')
        {
            return 0;
        }
        if(sign!='-')
        {
            sign='+';
        }
        int sum=0;
        while(s[l]>='0' &&s[l]<='9' && l<s.length())
        {   if(sum>INT_MAX/10 || sum==INT_MAX/10 && int(s[l])-48>INT_MAX%10)
            {   return (sign=='-')?INT_MIN:INT_MAX;
            
            }
            sum=(sum*10)+(int(s[l])-48);
            l++;
        }
        if(sign=='-')
        {
            return sum*-1;
        }
        return sum;
        
    }
};