class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        int sum=0;
        for(auto i:freq){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;

    }
};