//
// Created by nika mally on 17/05/2026.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> helper;
        for (int i=0; i<nums.size(); i++) {
            int tmp = target - nums.at(i);
            if (helper.contains(tmp)) {
                return {helper[tmp], i};
            }
            helper[nums.at(i)] = i;
        }
        return {};
    }
};

void twosum() {
    vector<int> nums = {2, 7, 11, 15};
    Solution s;
    vector<int> ans = s.twoSum(nums, 9);
    for (auto i : ans)
        cout << i << ' ';
}