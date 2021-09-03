class Solution {
public:
    void rotate(vector<int>& nums, int k) {
/*We can use two pointers, say i and j which point to first and last element of array respectively. As we know in cyclic rotation we will bring last element to first and shift rest in forward direction, so start swaping arr[i] and arr[j] and keep j fixed and i moving towards j.  Repeat till i is not equal to j.*/
        k=k%nums.size();
           reverse(nums.begin(),nums.begin()+nums.size()-k);
            reverse(nums.begin()+nums.size()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};