class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(s.find(n)==s.end()){
            s.insert(n);
            n= sumofsquares(n);
            if(n==1){
                return true;
            }
        }
        return false;
        
    }
    private:
         int sumofsquares(int n){
            int res=0;
            while(n>0){
                int d=n%10;
                d*=d;
                res+=d;
                n/=10;
            }
            return res;
         }
};
