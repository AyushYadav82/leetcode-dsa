class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> second=nums;
       sort(second.begin(),second.end());
       int max1=second[n-1];
       int max2=second[n-2];

       if(max1>=2*max2){
        for(int i=0;i<n;i++){
            if(max1==nums[i]){
                return i;
            }
        }
       } 
       return -1;
    }
};