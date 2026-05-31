//
// Created by nika mally on 31/05/2026.
//

#include "nrepeatedelementinsize2narray.h"

#include <unordered_map>
#include <vector>

class Solution {
public:
    int repeatedNTimes(std::vector<int>& nums) {
        std::unordered_map<int, int> um;
        for (auto a: nums) {
            um[a]+=1;
            if (um[a] >= 2)
                return a;
        }
        return -1;
    }
};

void nrepeatedelementinsize2narray() {

}
