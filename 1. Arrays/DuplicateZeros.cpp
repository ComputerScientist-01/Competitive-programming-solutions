class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    for (int i = arr.size() - 1; i >= 0; i--) 
    {
        if (arr[i] == 0) 
        {
            for (int j = arr.size() - 1; j > i; j--) 
            {
                arr[j] = arr[j-1];
            }
        }
    }
}
};