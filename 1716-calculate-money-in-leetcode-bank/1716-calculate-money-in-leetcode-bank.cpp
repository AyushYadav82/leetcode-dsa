class Solution {
public:
    int totalMoney(int n) {
        int w=n/7;
        int d=n%7;
        int sum=0;
        if(w>=1){
        int a=1,b=7;
        while(w>0){
            sum+=((a+b)*(b-a+1))/2;
            a++,b++;
            w--;
        }
        for(int i=a;i<d+a;i++){
            sum+=i;
        }
        }
        else{
            for(int i=1;i<=d;i++){
                sum+=i;
            }
        }
        return sum;
    }
};