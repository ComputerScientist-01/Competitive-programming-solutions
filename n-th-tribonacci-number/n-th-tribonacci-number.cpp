class Solution {
public:
    int tribonacci(int n) {
        long fib[n+3];
        fib[0]=0;
        fib[1]=1;
        fib[2]=1;
        
        long it=0;
        for(it=0; it<n; it++){
            fib[it+3]=fib[it]+fib[it+1]+fib[it+2];
        }
        return fib[n];
        
    }
};