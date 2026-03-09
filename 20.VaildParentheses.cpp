#include <bits/stdc++.h>

using namespace std;

/**
 * ( : 40
 * ) : 41
 * { : 123
 * } : 125
 * [ : 91
 * ] : 93
*/
string s = "(){}}{";

bool IsValid(string s){
    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty())
                return false;

            char top = st.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    cout<<IsValid(s);
    return 0;
}