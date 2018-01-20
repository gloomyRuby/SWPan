//
// Created by Oysha on 20/01/2018.
//

#include "RangeSolver.h"


int **RangeSolver::range(const Codeword &*codewords, int &distance, int &k) const
{
    int n = codewords[0].getLength();
    auto range = (int **)malloc(n * sizeof(int*));
    for (int i = 0; i < distance; ++i) {
        *range = (int *)malloc(k * sizeof(int));
    }

    for (int i = 0; i < ; ++i) {
        
    }
    return nullptr;}
