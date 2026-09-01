class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        if(n<2 && people[0]+people[1]<=limit) return 1;
        sort(people.begin(),people.end());
        int left=0,right=n-1;

        int boat=0;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
            }
            right--;
            boat++;
        }
        return boat;
    }
};
#pragma GCC optimize("Ofast")
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}