//
// Created by Oysha on 20/01/2018.
//


#pragma once

#include <vector>
#include "Codeword.h"


class MatrixReader
{
public:
    int **getGeneratorMatrix(std::istream &input) const;
};
