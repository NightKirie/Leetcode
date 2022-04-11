#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0, end = nums.size();
    while(end > 0 && i < end) {
        if(nums[i] == val) {
            nums[i] = nums[end-1];
            --end;
        }
        else{
            ++i;
        }
    }
    return i;
}

int main() { _
    vector<int> t{3,2,2,3};
    printf("%d\n", removeElement(t, 3));
}