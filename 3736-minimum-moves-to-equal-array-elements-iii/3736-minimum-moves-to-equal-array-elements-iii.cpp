class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int num=nums[n-1];

        for(int i=0;i<n;i++){
            ans+=num-nums[i];
        }
        return ans;
    }
};