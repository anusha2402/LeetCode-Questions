class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for (int i : nums) {
            if (mp.find(i) != mp.end()) {
                res += mp[i];
                mp[i]++;
            } else {
                mp[i] = 1;
            }
        }

        return res;
    }
};