//
// Created by Oysha on 20/01/2018.
//

#include "Codeword.h"
#include <cstdlib>


Codeword::Codeword()
{
    length = 127;
    codeword = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; ++i) {
        codeword[i] = 0;
    }
}

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

Codeword &Codeword::operator+=(const Codeword w)
{
    for (int i = 0; i < length; i++) {
        codeword[i] += w[i];
        codeword[i] = codeword[i] % 2;
    }
    return *this;
}

Codeword &Codeword::operator=(const Codeword w)
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = w[i];
    }
    return *this;
}

int Codeword::getLength() const
{
    return length;
}

int Codeword::weight() const
{
    int weight = 0;

    for (int i = 0; i < length; ++i) {
        weight += codeword[i];
    }
    return weight;
}

int &Codeword::operator[](int i) const
{
    return codeword[i];
}
