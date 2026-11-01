class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            if(n%3==0) continue;
            if(n%3>=1 ) count++;
        }
        return count;
    }
};