class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        ans=(nums[n-1]-1)*(nums[n-2]-1);
        return ans;
    }
};