class Solution {
public:
    int smallestEvenMultiple(int n) {
        while(n<150){
            if(n%2==0){
                return n;
            }else{
                n*=2;
            }
        }
        return n;
    }
};