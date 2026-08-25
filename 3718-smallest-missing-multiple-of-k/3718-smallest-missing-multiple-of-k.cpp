class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set(nums.begin(),nums.end());
        int x=k;
        while(set.find(x)!=set.end()){
            x+=k;
        }
        return x;
    }
};