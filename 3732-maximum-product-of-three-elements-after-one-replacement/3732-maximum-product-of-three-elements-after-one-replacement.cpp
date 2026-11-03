class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        long long a=1LL*nums[n-1]*nums[n-2];
        long long b=1LL*nums[0]*nums[1];
        long long c=1LL*nums[0]*nums[n-1];

        long long ans=max({abs(a),abs(b),abs(c)});

        return ans*100000;
    }
};