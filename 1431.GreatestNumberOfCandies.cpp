#include <iostream>
#include <vector>

using namespace std;

vector<int> candies = {2,3,5,1,3};
int  extraCandies = 3;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
    int maxOfcandies = 0;
    int n = candies.size();
    for(int i=0; i<n; i++){
        if(candies[i] > maxOfcandies) maxOfcandies = candies[i];
    }
    vector<bool> result;
    for(int i=0; i<n; i++){
        if(candies[i] + extraCandies >= maxOfcandies) result.push_back(true);
        else result.push_back(false);
    }
    return result;
}

int main(){
    vector<bool> result = kidsWithCandies(candies, extraCandies);
    for(int i=0; i< result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}