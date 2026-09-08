class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums2[i],i});
        }
        sort(v.begin(),v.end());
        vector<int> ans(n);
        
        int left=0,right=n-1;

        for(int i=n-1;i>=0;i--){
            int val=v[i].first;
            int idx=v[i].second;

            if(nums1[right]>val){
                ans[idx]=nums1[right];
                right--;
            }
            else{
                ans[idx]=nums1[left];
                left++;
            }
        }
        
        return ans;
    }
};