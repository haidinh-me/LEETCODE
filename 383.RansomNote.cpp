#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool canConstruct(string ransomNote, string magazine){
    int arr[26] = {0};
    if(ransomNote.length() > magazine.length()) return false;
    for(char &c : magazine){
        arr[c - 'a']++;
    }
    for(char &c : ransomNote){
        arr[c -'a']--;
        if(arr[c-'a'] <0)
            return false;
    }
    return true;
}

int main(){
    string s1 = "bg";
    string s2 = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
    cout<<canConstruct(s1, s2);
    return 0;
}