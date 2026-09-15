class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        if(n<2) return nums;
        unordered_map<int,int> freq;

        for(int x: nums){
            freq[x]++;
        }
       vector<pair<int,int>> v;
       for(auto it:freq){
        v.push_back({it.second,it.first});
       }
       sort(v.rbegin(),v.rend());
       for(int i=0;i<k;i++){
        ans.push_back(v[i].second);
       }
        return ans;
    }
};