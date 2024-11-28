#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    unordered_map<char, char> matching_brackets = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };
    
    stack<char> stk;

    for (char c : s) {
        if (matching_brackets.count(c)) {
            if (!stk.empty() && stk.top() == matching_brackets[c]) {
                stk.pop();
            } else {
                return false;
            }
        } else {
            stk.push(c);
        }
    }

    return stk.empty();
}

int main() {
    string s = "[{()}]"; 
    cout << (isValid(s) ? "Valid" : "Invalid") << endl;
    return 0;
}
