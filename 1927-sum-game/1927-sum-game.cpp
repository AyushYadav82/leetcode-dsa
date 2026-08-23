class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int half=n/2;
        int left=0,right=0,
            rightsum=0,leftsum=0;
        for(int i=0;i<half;i++){
            if(num[i]=='?'){
                left++;
            }else{
                leftsum+=num[i]-'0';
            }
        }
        for(int i=half;i<n;i++){
            if(num[i]=='?'){
                right++;
            }else{
                rightsum+=num[i]-'0';
            }
        }
        int diff=left-right;
        if(diff%2!=0) return true;
        if(2*(leftsum-rightsum)==9*(right-left)) return false;
        return true;
    }
};