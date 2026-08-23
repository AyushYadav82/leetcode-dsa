class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0,minjump=0,currend=0;
        int n=nums.size();
        if(n==1) return 0;
        for(int i=0;i<n-1;i++){
            far=max(far,i+nums[i]);
            if(i==currend){
                minjump++;
                currend=far;
            }
        }
        return minjump;
    }
};