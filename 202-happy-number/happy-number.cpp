class Solution {
public:
int sqrnum(int n)
{
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem*rem;
        n/=10;

    }
    return sum;
}
    bool isHappy(int n) {
        unordered_set<int> num;
        

        while(n!=1 && !num.count(n))
        {
            num.insert(n);
            n=sqrnum(n);
        }
        if(n==1)
        {
            return true;
        }
        else
        return false;
    }
};