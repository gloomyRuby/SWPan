//
// Created by Oysha on 20/01/2018.
//


#pragma once

//#include <sys/proc_info.h>
#include "Codeword.h"


class CodewordsExtractor
{
public:
    int distance = 0;
    Codeword *generateCodewords(const Codeword GMatrix[], int &n, int &k);

    void binaryWordCreator(const int &k, Codeword &binaryWord) const;
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