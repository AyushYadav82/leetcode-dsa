class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size()-1;
        if(n==0 ) return nums;
        int l=0;
        int t=n;
        while(l<=t){
            if(nums[l]%2!=0){
            if(nums[t]%2==0){
                swap(nums[l],nums[t]);
                t--;
                l++;
            }else{
                t--;
            }
            }else{
                l++;
            }
        }
        return nums;
    }
};