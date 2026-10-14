class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;

        for(int i=0;i<n;i++){
            bool left=true,right=true;
            for(int j=0;j<i;j++){
                if(nums[j]>=nums[i]){
                    left=false;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[j]>=nums[i]){
                    right=false;
                }
            }
            if(left || right){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};