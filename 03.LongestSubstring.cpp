#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string s = " ";

int lengthOfLongestSubstring(string s){
    int left_pos = 0;
    int right_pos = 0;
    int result = 0;
    vector<int> char_index(128,-1);
    cout<<s.length()<<endl;
    for(right_pos; right_pos < s.length(); ++right_pos){
        if(char_index[s[right_pos]] >= left_pos)
            left_pos = char_index[s[right_pos]] + 1;

        char_index[s[right_pos]] = right_pos;

        result = max(right_pos - left_pos + 1, result);
    }
    return result;
}

int main(){
    cout<<lengthOfLongestSubstring(s);
    return 0;
}