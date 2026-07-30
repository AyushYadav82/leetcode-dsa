class Solution {
public:
    int minimumPushes(string word) {
        int a=word.size();
        int ans=0;
        for(int i=0;i<a;i++){
            ans+=(i/8)+1;
        }
        return ans;
    }
};