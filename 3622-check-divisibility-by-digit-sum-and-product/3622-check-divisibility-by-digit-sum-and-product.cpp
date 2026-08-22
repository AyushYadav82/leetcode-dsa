class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n;
        int prod=1;
        int sum=0;
        while(a>0){
            int dig=a%10;
            sum+=dig;
            prod*=dig;
            a/=10;
        }
        sum+=prod;
        if(n%sum==0) return true;
        return false;
    }
};