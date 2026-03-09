#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> arr = {1,12,2,7,3,9};
int target = 9;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int,int> num_map;
    for(int i = 0; i< nums.size(); i++){
        int temp = target - nums[i];
        if(num_map.find(temp) != num_map.end())
            return {num_map[temp],i};
        num_map[nums[i]] = i;
    }
    return {};
}

int main()
{
    cout << twoSum(arr, target).front() <<" "<<twoSum(arr, target).back(); 
    return 0;
}