class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        long long low=0,high=x;
        long long ans=low;
        long long mid=0;
        while(low<=high){
        mid=low+(high-low)/2;
        if(mid*mid==x) return mid;
        if(mid*mid<x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        }
        return ans;
    }
};