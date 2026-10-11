class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        vector<int> v(st.begin(),st.end());
        sort(v.begin(),v.end());

        int ans=1;
        for(int i:v){
            if(i==ans){
                ans++;
            }else if(i>ans){
                return ans;
            }
        }
        return ans;
    }
};