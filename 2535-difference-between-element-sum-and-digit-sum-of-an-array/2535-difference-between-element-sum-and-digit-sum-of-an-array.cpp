class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int dsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                int a=nums[i]%10;
                dsum+=a;
                nums[i]/=10;
            }
        }
        return sum-dsum;
    }
};