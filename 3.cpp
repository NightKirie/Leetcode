

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;


int lengthOfLongestSubstring(string s) {
    if(s.length() == 0)
        return 0;
    int max_len = -1;
    for(int i = 0; i < s.length(); ++i) {
        int idx[128] = {0}, len = 0;
        for(int j = i; j < s.length(); ++j) {
            if(idx[s[j]] == 1) {
                break;
            }
            else{
                idx[s[j]] = 1;
                ++len;
            }
        }
        max_len = (len > max_len) ? len : max_len;

    }
    return max_len;
}

int main() { _
    printf("%d\n", lengthOfLongestSubstring("bbbbb"));
}