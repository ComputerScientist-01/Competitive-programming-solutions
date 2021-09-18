class Solution
{
public:
    int climbStairs(int n)
    {
        int stairs[n + 2];
        stairs[0] = 1;
        stairs[1] = 1;
        int it = 0;
        for (it = 2; it <= n; it++)
        {
            stairs[it] = stairs[it - 1] + stairs[it - 2];
        }
        return stairs[n];
    }
};