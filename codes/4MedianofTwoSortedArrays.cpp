class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int i=0,n=nums1.size();
        int j=0,m=nums2.size();
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
                temp.push_back(nums1[i++]);
            }
            else
            {
                temp.push_back(nums2[j++]);
            }
        }
        while(i<n)
        {
            temp.push_back(nums1[i++]);
        }
        while(j<m)
        {
            temp.push_back(nums2[j++]);
        }
        n=(temp.size());
        if(n%2==1)
        {
            n=n/2;
            return temp[n];
        }
        else
        {
            n=n/2;
            cout<<n;
            return (double)(temp[n]+temp[n-1])/2;
        }
    }
};