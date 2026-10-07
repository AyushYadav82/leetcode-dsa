class Solution {
public:
    bool canConstruct(string ransom, string magazine) {
        int freq[26]={0};
        for(char ch: magazine){
            freq[ch-'a']++;
        }
        for(char ch:ransom){
            freq[ch-'a']--;

            if(freq[ch-'a']<0) return false;
        }
        return true;
    }
};