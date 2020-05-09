//
// 找到数组中的最大子序列
//

#ifndef CLIONWORK_SOLUTION_H
#define CLIONWORK_SOLUTION_H
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int pre = 0, maxAns = nums[0];
        for(const auto &x: nums){
            pre = max(pre + x, x);//统计每个位置 连续子集的最大值
            maxAns = max(pre, maxAns);//得到新数组中的最大值
        }
        return maxAns;
    }
};


#endif //CLIONWORK_SOLUTION_H
