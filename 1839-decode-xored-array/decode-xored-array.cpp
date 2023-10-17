class Solution {
public:
    vector<int> decode(vector<int>& arr, int first) {
        vector<int> res = {first};
        for (int& a: arr)
            res.push_back(first ^= a);
        return res;

    }
};