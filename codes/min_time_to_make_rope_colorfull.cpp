class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int i=0,prev=0,cost=0;
        for(i=1;i<colors.size();i++)
        {
            if(colors[prev]==colors[i])
            {
                if(neededTime[prev]<neededTime[i])
                {
                    cost+=neededTime[prev];
                    prev=i;
                }
                else
                {
                    cost+=neededTime[i];
                    
                }
            }
            else
            {
                prev=i;
            }
        }
        // testing cout<<cost;
        return cost;
    }
};