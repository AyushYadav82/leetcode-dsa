class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        int sum=0;
        for(int x:nums){
            st.insert(x);
            sum+=x;

        }
        float ans=max(1,sum/n +1);
        

        while(st.count(ans)){
            ans++;
        }
        return ans;

    }
};