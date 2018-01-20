//
// Created by Oysha on 20/01/2018.
//

#include <cstdlib>
#include "Codeword.h"


Codeword::Codeword(const int _length)
{
    length = _length;
    codeword = (int*)malloc(length * (sizeof(int)));
}

Codeword::Codeword(const int *line)
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = line[i];
    }
}

Codeword &Codeword::operator+=(const int *w)
{
    for (int i = 0; i < length; i++) {
        codeword[i] += w[i];
        codeword[i] = codeword[i] % 2;
    }
    return *this;
}

Codeword &Codeword::operator=(const int w[])
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = w[i];
    }
    return *this;
}

int Codeword::weight()
{
    int weight = 0;

    for (int i = 0; i < length; ++i) {
        weight += codeword[i];
    }
    return weight;
}

Codeword::Codeword()
{
    length = 127;
    codeword = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; ++i) {
        codeword[i] = 0;
    }
}
