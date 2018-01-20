//
// Created by Oysha on 20/01/2018.
//

#include "MatrixReader.h"
#include <iostream>
#include <fstream>


int **MatrixReader::getGeneratorMatrix(std::istream &input) const
{
    int n, k;
    input >> n >> k;

    auto **matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(k * sizeof(int));
    }


    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            int tmp;
            input >> tmp;
            matrix[i][j] = tmp;
        }
    }

    return matrix;
}
