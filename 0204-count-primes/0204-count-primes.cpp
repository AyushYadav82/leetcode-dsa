class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        if(n==3) return 1;
        int count=1;
        for(int i=3;i<n;i+=2){
            bool flag=true;
            for(int j=3;j*j<=i;j+=2){
                if(i%j==0){
                    flag=false;
                    break;
                }
            }
            if(flag==true) count++;
        }
        return count;
    }
};