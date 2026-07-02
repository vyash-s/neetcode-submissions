class Solution {
public:
    double myPow(double x, int n) {
        double r=1;
        int k=n;
        while(n!=0){
            if(n>0){
              r*=x;
              n--;
            }
            else{
                r/=x;
                n++;
            }
        }
        return r;
        
    }
};
