class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> a;

        for(int i=0;i<nums.size();i++){
            a.push_back(pow(nums[i],2));
        }
        sort(a.begin(),a.end());

        int i=0,j=a.size()-1;
        long long sum=0;
        while(i<j){
            sum+=a[j];
            j--;
            sum-=a[i];
            i++;
        }
        if(i==j){
            sum+=a[i];
        }
        return sum;

    }
};