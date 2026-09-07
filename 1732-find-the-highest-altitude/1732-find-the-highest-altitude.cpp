class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0,high=0;
        for(int i:gain){
            curr+=i;
            high=max(curr,high);
        }
        return high;
    }
};