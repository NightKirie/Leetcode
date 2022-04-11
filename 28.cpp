#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int strStr(string haystack, string needle) {
   return haystack.find(needle);    
}

int main() { _
    printf("%d\n", strStr("a", "a"));
}