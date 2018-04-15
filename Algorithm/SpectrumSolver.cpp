//
// Created by Oysha on 15/04/2018.
//

#include "SpectrumSolver.h"
#include "Codeword.h"


int grayCode(long long &gray, long long &i);

int vectorWeight(long long int i);

int *SpectrumSolver::getSpectrum(int **GMatrix, const int n, const int k) const
{
    int spectrum[129] = { 0 };
    long long counter = (1LL << k) - 1;
    Codeword codeword = Codeword(n);

    for (long long i = 0, gray = 0; i < counter; ) {
        codeword ^= GMatrix[grayCode(gray, i)];
        spectrum[codeword.weight()]++;
    }

    return spectrum;
}

int grayCode(long long &gray, long long &i)
{
    i++;
    long long delta = i & (~i + 1);
    gray ^= delta;
    return vectorWeight(delta - 1);
}

int vectorWeight(long long int i)
{
    int count = 0;
    while (i) {
        count += i & 1;
        i >>= 1;
    }
    return count;
}
