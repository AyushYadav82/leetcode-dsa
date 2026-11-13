class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans=0;

        for(int i:st){
            if(st.find(i-1)==st.end()){
                int count=1;
                int x=i;
            
            while(st.find(x+1)!=st.end()){
            count++;
            x++;
        }
        ans=max(count,ans);
            }
        }
        return ans;
    }
};