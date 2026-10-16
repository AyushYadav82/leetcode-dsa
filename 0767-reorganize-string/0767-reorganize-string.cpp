class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        int max=0;
        char maxchar=' ';
        for(auto p:mp){
            if(p.second>max){
                max=p.second;
                maxchar=p.first;
            }
        }
        if(max>(s.length()+1)/2) return "";
        string ans(s.size(),' ');
        int idx=0;

        while(mp[maxchar]>0){
            ans[idx]=maxchar;
            idx+=2;
            mp[maxchar]--;
        }
        for(auto p:mp){
            char ch=p.first;
            int freq=p.second;

            while(freq>0){
                if(idx>=s.size()){
                    idx=1;
                }
                ans[idx]=ch;
                idx+=2;
                freq--;
            }

        }
        return ans;
    }
};