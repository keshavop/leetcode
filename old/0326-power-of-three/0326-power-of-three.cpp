class Solution
{
    public:
        bool isPowerOfThree(int n)
        {
            if (n <= 0)
            {
                return false;
            }
            while(n>0){
                if(n%3==0){
                    n = n/3;
                }
                else{
                    break;
                }
            }
        return (n==1);
        }
};