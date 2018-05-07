//
// Created by Oysha on 20/01/2018.
//

#include "Codeword.h"


Codeword::Codeword(const int line[])
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = line[i];
    }
}

Codeword &Codeword::operator=(const int w[])
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = w[i];
    }
    return *this;
}

int Codeword::weight() const
{
    int weight = 0;

    for (int i = 0; i < length; ++i) {
        weight += codeword[i];
    }
    return weight;
}

int &Codeword::operator[](int i)
{
    return codeword[i];
}

Codeword &Codeword::setToZero()
{
    for (int i = 0; i < length; ++i) {
        codeword[i] = 0;
    }
    return *this;
}
