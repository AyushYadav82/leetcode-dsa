class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> a(26);
        for(char ch:s){
            a[ch-'a']++;
        }
        string left="";
        string middle="";
        for(int i=0;i<26;i++){
            left.append(a[i]/2,'a'+i);

            if(a[i]%2==1){
            middle=char('a'+i);
        }
        }
        string right=left;
        reverse(right.begin(),right.end());
        return left+middle+right;
    }
};