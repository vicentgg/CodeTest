//
// 最大正方形
// 1 0 0 0
// 1 1 0 0
// 1 1 0 0
// 0 0 0 1

#ifndef CODETEST_SOLUTION2_H
#define CODETEST_SOLUTION2_H
#include <vector>
#include <algorithm>
using namespace std;

class Solution2 {
public:
    //暴力求解
    int maximalSquare(vector<vector<int>>& matrix){
        if(matrix.size() == 0 || matrix[0].size() == 0){ // 列 行
            return 0;
        }
        int maxSide = 0;//设置最大正方形的边长
        int rows = matrix.size(), columns = matrix[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                if(matrix[i][j] == 1) {
                    maxSide = max(maxSide, 1);
                    //计算可能的正方形边长
                    int currentMaxSide = min(rows - i, columns - j);
                    for(int k = 0; k < currentMaxSide; k++){
                        //判断的新增一行一列是否均为1
                        bool flag = true;
                        if(matrix[i + k][j + k] == 0)break;//对角线
                        for(int m = 0; m < k; m++){
                            if(matrix[i + k][j + m] == 0 || matrix[i + m][j + k] == 0){
                                flag = false;
                                break;
                            }
                        }
                        if(flag){
                            maxSide = max(maxSide,k+1);
                        } else{
                            break;
                        }

                    }
                }
            }
        }
        int maxSquare = maxSide * maxSide;
        return maxSquare;
    }
};


#endif //CODETEST_SOLUTION2_H
