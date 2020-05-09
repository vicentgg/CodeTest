//
// 拥有最多糖果的孩子
//

#ifndef CODETEST_SOLUTION1_H
#define CODETEST_SOLUTION1_H
#include <vector>
#include <algorithm>
using namespace std;

class Solution1 {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        int max_candies = *max_element(candies.begin(),candies.end());//找到数组中的最大值
        vector<bool> answer((int)candies.size(),false);//建立结果数组
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max_candies)answer[i] = true; //满足条件 返回true
        }

        return answer;
    }

};

#endif //CODETEST_SOLUTION1_H
