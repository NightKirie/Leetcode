#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    string s;
    cin >> s;
    int sum = 0;
    while(s.length() > 0) {
        char now = s[s.length() - 1];
        char next;
        if(s.length() > 1)
            next = s[s.length() - 2];
        else
            next = ' ';
        switch(now) {
            case 'I':
                ++sum;
                s.erase(s.length() - 1);
                break;
            case 'V':
                if(next == 'I') {
                    sum += 4;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 5;
                    s.erase(s.length() - 1);
                }
                break;
            case 'X':
                if(next == 'I') {
                    sum += 9;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 10;
                    s.erase(s.length() - 1);
                }
                break;
            case 'L':
                if(next == 'X') {
                    sum += 40;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 50;
                    s.erase(s.length() - 1);
                }
                break;
            case 'C':
                if(next == 'X') {
                    sum += 90;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 100;
                    s.erase(s.length() - 1);
                }
                break;
            case 'D':
                if(next == 'C') {
                    sum += 400;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 500;
                    s.erase(s.length() - 1);
                }
                break;
            case 'M':
                if(next == 'C') {
                    sum += 900;
                    s.erase(s.length() - 1);
                    s.erase(s.length() - 1);
                }
                else {
                    sum += 1000;
                    s.erase(s.length() - 1);
                }
                break;        
        }
        
    }
    cout << sum << "\n";
	return 0;
}