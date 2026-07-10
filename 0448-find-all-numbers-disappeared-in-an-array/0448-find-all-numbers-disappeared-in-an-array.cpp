class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
       vector<int> a;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int expected=1;
        for(int i=0;i<n;i++){
        if(arr[i]==expected){
            expected++;
        }else if(arr[i]<expected) continue;
        else {
            while(expected<arr[i]){
            a.push_back(expected);
            expected++;
        }
        expected++;
        }
    }
    while(expected<=n){
        a.push_back(expected);
        expected++;
    }
    return a;
    }
};