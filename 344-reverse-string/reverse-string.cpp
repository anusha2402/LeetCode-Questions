class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size(),left=0,right=n-1;
            while(left<right)
            {
                            swap(s[left++],s[right--]);

            }
    }
};