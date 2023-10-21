class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i: nums) mp[i]++;
        vector<int> res;
        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i->second * 3 > nums.size()) res.push_back(i->first);
        }
        return res;
    }
};