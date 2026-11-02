class Solution {
public:
    string reverseStr(string s, int k) {
        vector<char> arr(s.begin(),s.end());
        for(int i=0;i<arr.size();i+=2*k){
            int left=i;
            int right=min(i+k-1,(int)arr.size()-1);

            while(left<right){
                char temp=arr[left];
                arr[left++]=arr[right];
                arr[right--]=temp;
            }
        }
        return string (arr.begin(),arr.end());

    }
};