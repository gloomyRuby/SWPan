//
// Created by Oysha on 20/01/2018.
//


#pragma once

//#include <sys/proc_info.h>
#include "Codeword.h"


class CodewordsExtractor
{
public:
    Codeword *generateCodewords(const int **GMatrix, int &n, int &k) const;
};


unsigned long long int binpow(int n)
{
    unsigned long long int res = 1;
    unsigned long long int a = 2;
    while (n)
        if (n & 1) {
            res *= 2;
            --n;
        }
        else {
            a *= a;
            n >>= 1;
        }

    return res - 1;
}