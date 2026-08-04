class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int a=nums[i];
            int b=nums[i+1];
            for(int j=nums[i]+1;j<b;j++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};