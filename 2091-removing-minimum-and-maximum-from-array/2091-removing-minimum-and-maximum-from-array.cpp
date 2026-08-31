class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int idx1=0,idx2=0;
        vector<int> arr=nums;
        sort(arr.begin(),arr.end());
        int lar=arr[n-1];
        int sma=arr[0];
        for(int i=0;i<n;i++){
            if(nums[i]==lar){
                idx1=i;
            }
            if(nums[i]==sma){
                idx2=i;
            }
        }
        int front=max(idx1,idx2)+1;
        int back=n-min(idx1,idx2);
        int mix=min(idx1,idx2)+1  +n-max(idx1,idx2);
        return min({front,back,mix});
    }
};