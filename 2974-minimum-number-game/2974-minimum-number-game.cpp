class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i+=2){
            int a=nums[i];
            int b=nums[i+1];
            ans.push_back(b);
            ans.push_back(a);
        }
        return ans;
    }
};