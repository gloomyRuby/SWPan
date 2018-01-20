//
// Created by Oysha on 20/01/2018.
//


#pragma once

#include <cstdlib>
#include "Codeword.h"


class RangeSolver
{
    int **range(const Codeword &codewords[], int &distance, int &k) const;
};
