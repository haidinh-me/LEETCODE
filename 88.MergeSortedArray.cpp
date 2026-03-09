#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> nums1 = {1,2,3,0,0,0};
vector<int> nums2 = {2,5,6};

int m = 3;
int n = 3;

int main(){
    nums1.erase(nums1.end() - (nums1.size()-m),nums1.end());
    nums2.erase(nums2.end() - (nums2.size()-n),nums2.end());
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    for(int i =0; i< nums1.size(); i++)
        cout<<nums1[i]<<" ";
    n = 0;
    m += n;
    return 0;
}