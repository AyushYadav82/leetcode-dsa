class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int ans=0;

        int mid=n/2;

        for(int i=0;i<mid;i++){
            ans+=nums[mid]-nums[i];
        }
        for(int i=mid+1;i<=n;i++){
            ans+=nums[i]-nums[mid];
        }
        return ans;
    }
};