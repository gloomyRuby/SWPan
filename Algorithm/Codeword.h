//
// Created by Oysha on 15/04/2018.
//

#pragma once
#include <cstdlib>


class Codeword
{
    int codeword[128] = { 0 };
    int length;
public:
    explicit Codeword(int _length) : length(_length) {};
    explicit Codeword(const int line[]);

    int getLength() { return length; }
    int weight() const;
    Codeword &setToZero();
    Codeword &operator=(const int w[]);
    int &operator[](int i);
};
