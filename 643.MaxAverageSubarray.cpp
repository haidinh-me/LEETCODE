#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {9,7,3,5,6,2,0,8,1,9}; 

int k = 6;

double findMaxAverage(vector<int>& nums, int k){
    int sum = 0, max_sum = 0;
    int left_pos = 0, right_pos = left_pos + k ;

    for(int i =0; i<k; i++)
        sum += nums[i];
    max_sum = sum;

    if(left_pos != nums.size() -k){
        while(left_pos != nums.size() -k){
        sum -= nums[left_pos];
        sum += nums[right_pos];
        if(sum > max_sum) max_sum = sum;

        left_pos ++;
        right_pos ++;
        }
        return max_sum*1.0/k*1.0;
    }
    else return sum*1.0/k*1.0;
}


int main(){
    cout<<findMaxAverage(nums, k);
    return 0;
}