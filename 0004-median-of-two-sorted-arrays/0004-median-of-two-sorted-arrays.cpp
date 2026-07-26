class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median=0;
        int k=0;
        int m=nums1.size(),n=nums2.size();
        int mergearr[m+n];
        for(int i=0;i<m;i++){
            mergearr[k++]=nums1[i];
        }
         for(int i=0;i<n;i++){
            mergearr[k++]=nums2[i];
        }
         for (int i = 0; i < m+n; i++) {
        for (int j = i + 1; j < m+n; j++) {
            if (mergearr[i] > mergearr[j]) {
                int temp = mergearr[i];
                mergearr[i] = mergearr[j];
                mergearr[j] = temp;
            }
        }
    }
    if(k%2!=0){
        median=mergearr[k/2];
    }
    else{
        median=(mergearr[k/2 - 1]+mergearr[k/2])/2.0;
    }
    return median;
    }
};