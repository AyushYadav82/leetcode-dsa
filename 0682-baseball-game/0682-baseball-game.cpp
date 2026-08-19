class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C") {
                st.pop_back();
            }else if(ops[i]=="D"){
                st.push_back(2*st.back());
            }
            else if(ops[i]=="+"){
                int n=st.size();
                st.push_back(st[n-1]+st[n-2]);
            }else{
                st.push_back(stoi(ops[i]));
            }
        }
        int sum=0;
        for(int i:st){
            sum+=i;
        }
        return sum;
    }
};