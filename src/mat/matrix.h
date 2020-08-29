//
// Created by 周秀敏 on 2020/8/29.
//

#ifndef CPPLEARN_MATRIX_H
#define CPPLEARN_MATRIX_H
#include <vector>
namespace mat{
    void randMatrix(std::vector<std::vector<float>> &matrix);

    std::vector<std::vector<float>>
    multiplyMatrixByBlas(std::vector<std::vector<float>> &matrixA, std::vector<std::vector<float>> &matrixB);

    std::vector<std::vector<float>>
    multiplyMatrixNormal(std::vector<std::vector<float>> &matrixA, std::vector<std::vector<float>> &matrixB);

    std::vector<std::vector<float>>
    multiplyMatrixAdvance(std::vector<std::vector<float>> &matrixA, std::vector<std::vector<float>> &matrixB);

    bool verifyTwoMatrixAreEqual(std::vector<std::vector<float>> &matrixA, std::vector<std::vector<float>> &matrixB);

    void test();

}

#endif //CPPLEARN_MATRIX_H
