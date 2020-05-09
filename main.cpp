//
// Created by 13425 on 2020/5/3.
//

#include "Solution.h"
#include "Solution1.h"
#include "Solution2.h"
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

//    Solution solution;
//    vector<int> num;
//    int length, x;
//    cout << "length:" << endl;//输入数组长度
//    cin >> length;
//
//    for (int i = 0; i < length; i++) {
//        cin >> x;
//        num.push_back(x);
//    }
//
//    int maxAns = solution.maxSubArray(num);
//    cout << "max:" << maxAns << endl;


//    Solution1 solution1;
//    vector<int> candies;
//    vector<bool> answer;
//    int extraCandies;
//    int length,x;
//    cout << "length:" << endl;
//    cin >> length;
//
//    for(int i = 0; i < length; i++){
//        cin >> x;
//        candies.push_back(x);
//    }
//
//    cout << "extraCandies:" << endl;
//    cin >> extraCandies;
//
//    answer = solution1.kidsWithCandies(candies,extraCandies);
//    cout << "answer:" << endl;
//    for(int i = 0; i < length; i++)
//        cout << answer[i] << " ";
//    cout<<endl;

    Solution2 solution2;
    int edge;
    int x;
    cout << "edge:";
    cin >> edge;

    vector< vector<int> > matrix(edge, vector<int>(edge)); //构建一个边长为edge的0正方形数组

    for(int i = 0; i < edge; i++){
        for(int j = 0; j < edge; j++) {
            cin >> x;
            matrix[i][j] = x;
        }
    }

    int maxSquare;
    maxSquare = solution2.maximalSquare(matrix);
    cout << "maxSquare:" << maxSquare << endl;

    return 0;
}
