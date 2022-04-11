#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    vector<string> strs{"dog","racecar","car"};



    string pre = strs[0];
    while(1) {
        if(pre.compare("") == 0) {
            cout << "\"\"\n";
            break;
        }
        else {
            bool all_match = true;
            int i = 1;
            while(i < strs.size()) {
                while(strs[i].find(pre) != 0) {
                    if(pre.length() != 1)
                        pre = pre.substr(0, pre.length()-1);            
                    else
                        pre = ""; 
                }
                ++i;
            }
            cout << "\"" << pre << "\"" << "\n";
            break;
            
        }
    }

}