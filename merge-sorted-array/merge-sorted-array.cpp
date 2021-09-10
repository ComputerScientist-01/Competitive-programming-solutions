class Solution {
public:
    void merge(vector<int>& A, int n, vector<int>& B, int m)
    {
        int i=n-1,j=m-1,k=m+n-1;
        while( i>=0 and j>=0){
            if(A[i]>B[j]){
                A[k--]=A[i--];
            }
            else
            {
               A[k--]=B[j--]; 
            }
        }
        while(j>=0){
               A[k--]=B[j--]; 
            
        }
    }
};
// done in place by iterating from the back
// space - O(1)
