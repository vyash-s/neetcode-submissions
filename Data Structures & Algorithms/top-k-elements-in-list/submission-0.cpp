class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<pair<int,int>>res;
        for(const auto& i : mp){
            res.push_back({i.second, i.first});

        }
        sort(res.rbegin(),res.rend());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(res[i].second);
        }
        return result;
        
    }
};
