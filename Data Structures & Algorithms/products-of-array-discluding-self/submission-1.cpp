class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int c=0;
        for(auto&i: nums){
            if(i!=0){pro*=i;}
            else{c+=1;}
        }
        vector<int>output;
        for(auto&i: nums){
           if(c==1){
            if(i==0){output.push_back(pro);}
            else{output.push_back(0);}
           }
           else if(c>=2){output.push_back(0);}
           else{ output.push_back(pro/i);}
        }
        return output;

    }
};
