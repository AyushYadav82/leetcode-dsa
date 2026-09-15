class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        while(k>0){
            if(i>=0){
                int sum=num[i]+k;
                num[i]=sum%10;
                k=sum/10;
                i--;
            }else{
                num.insert(num.begin(),k%10);
                k/=10;
            }
        }
        return num;
    }
};