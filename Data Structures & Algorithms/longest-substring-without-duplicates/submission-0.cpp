class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0 , l=0;
        unordered_set<char>us;
        for(int r=0;r<n;r++){
            while(us.find(s[r])!=us.end()){
                us.erase(s[l]);
                l++;
            }
            us.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;

    }
    
};
