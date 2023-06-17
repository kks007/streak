#include <bits/stdc++.h>

using namespace std;

// mtd - 1

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack.push(s[i]);
        else
        {
            if (stack.empty())
                return false;

            char c = stack.top();
            if (s[i] == ')' && c != '(')
                return false;
            else if (s[i] == '}' && c != '{')
                return false;
            else if (s[i] == ']' && c != '[')
                return false;
            stack.pop();
        }
    }
    return stack.empty();
    }
};


// mtd2 (uses more memory for the hash map)


// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> open;
//         unordered_map<char, char> parens = {
//             {')', '('},
//             {']', '['},
//             {'}', '{'},
//         };
        
//         for (const auto& c : s) {
//             if (parens.find(c) != parens.end()) {
//                 // if input starts with a closing bracket.
//                 if (open.empty()) {
//                     return false;
//                 }

//                 if (open.top() != parens[c]) {
//                     return false;
//                 }

//                 open.pop();
//             } else {
//                 open.push(c);
//             }
//         }
        
//         return open.empty();
//     }
// };