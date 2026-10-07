class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        int ans=-1;
        for(int i:nums){
            if(i>0 && st.count(-i)){
                ans=max(i,ans);
            }
        }
        return ans;
    }
};