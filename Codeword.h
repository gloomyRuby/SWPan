//
// Created by Oysha on 20/01/2018.
//


#pragma once

#include <vector>


class Codeword
{
    int *codeword;
    int length;
public:
    Codeword();
    Codeword(int _length);
    Codeword(const int *line);

    int weight();
    Codeword &operator+=(const int *w);
    Codeword &operator=(const int w[]);
};

