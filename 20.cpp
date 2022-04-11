#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

bool isValid(string s) {
    stack<char> st;

    if(s.length() % 2 != 0)
        return false;

    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else {
            if(st.size() == 0)
                return false;
            if(s[i] == ']' && st.top() != '[')
                return false;
            else if(s[i] == '}' && st.top() != '{')
                return false;
            else if(s[i] == ')' && st.top() != '(')
                return false;
            st.pop();
        }
    }

    return st.size() == 0;
}


int main() { _
    
    string s;
    cin >> s;
    cout << isValid(s);
    

}

