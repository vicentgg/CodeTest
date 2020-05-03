//
// Created by 13425 on 2020/5/3.
//

#include "Solution.h"
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    vector<int> num;
    int length, x;
    cout << "length:" << endl;
    cin >> length;

    for (int i = 0; i < length; i++) {
        cin >> x;
        num.push_back(x);
    }

    Solution solution;
    int maxAns = solution.maxSubArray(num);
    cout << "max:" << maxAns << endl;

    return 0;
}
