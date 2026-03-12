#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> strs = {"cab","tin","pew","duh","may","ill","buy","bar","max","doc"};

vector<vector<string>>  groupAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> group;
    vector<vector<string>> result;
    for(auto s: strs){
        string temp = s;
        sort(temp.begin(), temp.end());
        group[temp].push_back(s);
    }
    for(auto& ip : group){
        result.push_back(ip.second);
    }
    return result;
}

int main(){
    vector<vector<string>> result = groupAnagrams(strs);
    cout<<result.size()<<endl;
    for(int i =0; i<result.size(); i++){
        for(int j =0; j<result[i].size(); j++){
            cout<< result[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}