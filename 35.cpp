#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, m;
    while(r >= l) {
        m = (r + l) / 2;
        if(nums[m] < target)
            l = m + 1;
        else if(nums[m] > target)
            r = m - 1;
        else
            return m;
    }
    return l;
}

int main() { _
    vector<int> t{1,3,5,6};
    printf("%d\n", searchInsert(t, 0));
}