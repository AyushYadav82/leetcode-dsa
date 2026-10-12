class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> tri;
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=tri[i-1][j-1]+tri[i-1][j];;
            }
            tri.push_back(row);
            ans=row;
        }
        return ans;
    }
};