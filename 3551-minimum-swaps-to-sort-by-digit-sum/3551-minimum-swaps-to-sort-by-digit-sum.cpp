class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> s;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int a=nums[i];
            while(a>0){
                sum+=a%10;
                a/=10;
            }
            s.push_back(sum);
            mp[nums[i]]=sum;

        }
        vector<int> sorted=nums;

        sort(sorted.begin(),sorted.end(), [&](int a,int b){
            if(mp[a]!=mp[b]) return mp[a]<mp[b];
            return a<b;;
        });
        unordered_map<int,int> pos;
        for(int i=0;i<nums.size();i++){
            pos[sorted[i]]=i;
        }
        vector<bool> visited(n,false);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(visited[i] || pos[nums[i]]==i) continue;
            int j=i;
            int count=0;
            
            while(!visited[j]){
                visited[j]=true;
                j=pos[nums[j]];
                count++;
            }
            swaps+=count-1;
        }
        return swaps;
    }
};