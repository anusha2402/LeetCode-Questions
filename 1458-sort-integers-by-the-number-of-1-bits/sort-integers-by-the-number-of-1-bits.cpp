class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
                int n = arr.size();
        pair<int, int> a[505];
        for(int i=0; i<n; i++) {
            int cnt = __builtin_popcount(arr[i]);
            a[i] = {cnt, arr[i]};
        }
        sort(a, a+n);
        vector<int> ans;
        for(int i=0; i<n; i++) ans.push_back(a[i].second);
        return ans; 
    }
};