//
// Created by nika mally on 31/05/2026.
//

#include <iostream>
#include <queue>
#include <vector>
#include "2126-destroying-asteroids.h"

class Solution {
public:
    static bool asteroidsDestroyed(int mass, std::vector<int>& asteroids) {
        std::priority_queue<int, std::vector<int>, std::greater<>> pq;
        long long masa = mass;
        for (int a: asteroids) {
            if (masa >= a) {
                masa+=a;
                while(!pq.empty() && pq.top() <= masa) {
                    masa += pq.top();
                    pq.pop();
                }
            } else {
                pq.push(a);
            }
        }
        return pq.empty();
    }
};

void destroyingasteroids() {
    std::vector<int> nums = {2, 7, 11, 15};
    Solution s;
    bool ans = s.asteroidsDestroyed(2, nums);
    std::cout<<ans;
}
