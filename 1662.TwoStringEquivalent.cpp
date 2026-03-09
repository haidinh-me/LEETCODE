#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> word1 = {"ab", "c"};
vector<string> word2 = {"a", "cb"};

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int i=0, j=0, p1=0, p2=0;
    while(i < word1.size() && j < word2.size()){
        if(word1[i][p1] != word2[j][p2])    return false;
        p1++; p2++;
        if(p1 == word1[i].size()){p1=0; i++;}
        if(p2 == word2[j].size()){p2=0; j++;}
    }
    return i == word1.size() && j == word2.size();
}

int main(){
    cout<<arrayStringsAreEqual(word1, word2)<<endl;
    return 0;
}