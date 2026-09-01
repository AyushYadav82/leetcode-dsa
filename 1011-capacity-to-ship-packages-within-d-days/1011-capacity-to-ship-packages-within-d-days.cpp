class Solution {
public:
    bool possible(vector<int>& arr, int days,int capacity){
        int day=1,load=0;
        for(int i=0;i<arr.size();i++){
            if(load+arr[i]>capacity){
                day++;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return day<=days;
    } 
    int shipWithinDays(vector<int>& arr, int days) {
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            high+=arr[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(arr,days,mid)){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};