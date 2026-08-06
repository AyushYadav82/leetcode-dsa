class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n<=100){
        int x=n;
        int b=1;
        while(x>0){
            b*=(x%10);
            x/=10;
        }
        if(b%t==0){
            return n;
        }else{
            n++;
        }
        }
        return n ;

    }

};