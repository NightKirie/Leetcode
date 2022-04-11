#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0, size = nums.size();
    if(size == 0)
        return 0;
    for(int j = 1; j < size; ++j) {
        if(nums[j] != nums[i]) {
            ++i;
            nums[i] = nums[j];
            
        }

    }
    return i+1;
}

int main() { _
    vector<int> t{0,0,1,1,2,2,3};
    printf("%d\n", removeDuplicates(t));
}