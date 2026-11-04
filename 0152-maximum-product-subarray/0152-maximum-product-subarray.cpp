class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1,suff=1;
        //calculate preffix and suffix and then return the max product
        int n=nums.size();
        

        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;

            pref=pref*nums[i];
            suff=suff*nums[n-i-1];

            ans=max(ans,max(pref,suff));
        }
        return ans;
    }
};


#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t mxal = alignof(max_align_t);
alignas(mxal) static unsigned char buf[64 * 1024 * 1024];
static size_t pos = 0;

void* operator new(size_t sz) {
    size_t pad = (mxal - (pos % mxal)) % mxal;
    pos += pad + sz;
    return (void*)(&buf[pos - sz]);
}

void* operator new[](size_t sz) { return operator new(sz); }

void operator delete(void*) noexcept {}
void operator delete[](void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
void operator delete[](void*, size_t) noexcept {}