class Solution {
public:
    int fib(int n) {
        int fib[n+2];
        fib[0]=0;
        fib[1]=1;
        int it=0;
        for(it=2; it<=n; it++){
            fib[it]=fib[it-1]+fib[it-2];
        }
        return fib[n];
    }
};