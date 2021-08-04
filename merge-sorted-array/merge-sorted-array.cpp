class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m){
        vector<int> c(n+m);
        int i = 0, j = 0;
        int x = 0;
        while(i<n and j<m){
            if(nums1[i]<nums2[j]) 
                c[x++]=nums1[i++];
            else{
                c[x++]=nums2[j++];
            }
        }
        while(i<n)
        {
            c[x++]=nums1[i++];
        }
        while(j<m)
        {
            c[x++]=nums2[j++];
        }
        nums1 = c;
        return;
    }
};