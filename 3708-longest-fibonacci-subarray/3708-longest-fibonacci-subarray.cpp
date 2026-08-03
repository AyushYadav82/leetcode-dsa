class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int curr=2;
        int ans=0;
        for(int i=2;i<n;i++){
            if(nums[i-2]+nums[i-1]==nums[i]){
                curr++;
            }else{
                curr=2;
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};