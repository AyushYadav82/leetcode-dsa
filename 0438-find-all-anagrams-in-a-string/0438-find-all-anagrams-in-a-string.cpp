class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> freqS(26,0), freqP(26,0);

        if(p.size()>s.size()) return ans;
        for(char ch:p){
            freqP[ch-'a']++;
        }
        int left=0;
        for(int right=0;right<s.size();right++){
            freqS[s[right]-'a']++;

            if(right-left+1>p.size()){
                freqS[s[left]-'a']--;
                left++;
            }
            if(freqS==freqP){
                ans.push_back(left);
            }
        }
        return ans;
    }
};