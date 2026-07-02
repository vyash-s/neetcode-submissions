class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int>um;
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++){
            um[s[i]]++;
        }
        for(int i=0;i<m;i++){
            um[t[i]]--;
        }
        for(auto it : um){
            if(it.second != 0) return false;
        }
        return true;
        
    }
};
