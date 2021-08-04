class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        
        
        if(n==0)
        {
            return 1;
        }
        if(x==0)
        {
            return 0;
        }
        
        double temp = myPow(x,n/2);
        if (n % 2 == 0)
        {
           return temp * temp; 
        }
            
        else{
       if(n > 0)
       {
         return temp * temp * x;  
       }
           
       else 
       {
          return temp * temp / x; 
       }
           
    }
            
    }    
    
    
};