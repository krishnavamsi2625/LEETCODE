class Solution {
public:
    int min(int x,int y)
    {
        return (x<y)?x:y;
    }
    int maxArea(vector<int>& height) {
        int l=0;
        int max=0,area;
        int r=height.size()-1;
        while(l<r)
        {
            area=(r-l)*min(height[l],height[r]);
            if(max<area)
            {
                max=area;
            }
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
            
        }
        return max;
        
    }
};