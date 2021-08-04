class Solution(object):
    def mySqrt(self, x):
        n=x
        y=1
        
        e=0.01
        while(n-y>e):
            n=(n+y)/2
            y=x/n
        return n
        
        """
        :type x: int
        :rtype: int
        """
        