class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        vector<int> ans(m+n,0);

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int sum=mul+ans[i+j+1];

                ans[i+j+1]=sum%10;
                ans[i+j]+=sum/10;
            }
        }
        string result="";
        int i=0;
        while(i<ans.size() && ans[i]==0){
            i++;
        }
        while(i<ans.size()){
            result+=(ans[i]+'0');
            i++;
        }
        return result.empty() ? "0":result;
    }
};