class Solution {
public:
    int numWaterBottles(int numbottles, int numexchange) {
        int sum=0;
        int empty=0;
        while(numbottles >=1){
            sum+=numbottles;
            empty+=numbottles;
            numbottles=empty/numexchange;
            empty=empty%numexchange;
        }
        return sum;
    }
};