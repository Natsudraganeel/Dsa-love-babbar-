#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%(nums.size())]=nums[i];
        }
        nums=temp;
    }
};
//why do we create a sepearte vector temp?see love babbar