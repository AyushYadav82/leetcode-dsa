class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int no=0;
            int a=0;
            a=nums[i];
            while(a>0){
                a=a/10;
                no++;
            }
            if(no%2==0){
                count++;
            }
        }
        return count;
    }
};