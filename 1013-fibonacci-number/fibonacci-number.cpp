class Solution {
public:
    int fib(int n) {
     int prev2 = 0, prev = 1;
        if(n == 0)
            return prev2;
        for(int i=2; i<=n; i++){
            int cur_i = prev + prev2;
            prev2 = prev;
            prev = cur_i;
        }
        return prev;

    }
};