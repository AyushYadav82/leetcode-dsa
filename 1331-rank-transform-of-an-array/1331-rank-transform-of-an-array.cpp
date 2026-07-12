class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> a=arr;
        sort(a.begin(),a.end());
        map<int,int> rank;
        int r=1;
        for(int i=0;i<a.size();i++){
            if(rank.count(a[i])==0){
                rank[a[i]]=r;
                r++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};