class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(const auto& i : strs){
            string sorteds = i;
            sort(sorteds.begin(),sorteds.end());
            mp[sorteds].push_back(i);
        }
        vector<vector<string>> result;
        for(auto& i : mp){
            result.push_back(i.second);
        }
        return result;
        
    }
};
