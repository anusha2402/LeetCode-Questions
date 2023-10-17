class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,per=1;
        for(i=2;i<=(num/2);i++)
        {
            if(num%i==0)
            {
                per=per+i;
            }
        }
       
        if(num==per&&num!=1)
        {
            return true;
        }
        
        else
            return false;
        
    }
};