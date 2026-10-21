class Solution {
public:
    string reversePrefix(string s, int k) {
        string temp="";
        for(int i=0;i<k;i++){
            temp+=s[i];
        }
        reverse(temp.begin(),temp.end());
        string ans="";
        ans=temp;
        for(int i=k;i<s.size();i++){
            ans+=s[i];
        }
        return ans;
    }
};