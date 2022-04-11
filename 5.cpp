#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

string longestPalindrome(string s) {
    if(s.length() == 0)
        return "";
    int n = s.length();
    int dp[n][n] = {0};
    int left = 0, len = 1;
    for(int i = 0; i < n; ++i) {
        dp[i][i] = 1;
        for(int j = 0; j < i; ++j) {
            if (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]))
                dp[j][i] = 1;
            else
                dp[j][i] = 0;
            if (dp[j][i] && len < i - j + 1) {
                len = i - j + 1;
                left = j;
            }
        }
    }
    return s.substr(left, len);
}

int main() { _
    cout << longestPalindrome("abcdbbfcba") << endl;
}