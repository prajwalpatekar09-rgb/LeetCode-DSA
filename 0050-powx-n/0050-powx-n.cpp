class Solution {
public:
    double myPow(double x, int n) {
        double product=1;
        long long N=n;

        if(N<0)
            {
                x=1/x;
                N=-N;
            }
        while(N>0)
        {
            if(N%2==1)
            {
                product=product*x;
            }
            x=x*x;
            N=N/2;
        }
        return product;
        
        
    }
};