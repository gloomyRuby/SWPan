//
// Created by Oysha on 22/01/2018.
//

#pragma once


class Codeword
{
    int *codeword;
    int length = 4;
public:
    Codeword(int _length);
    Codeword(const int line[]);

    int weight() const;
    int getLength() const;
    Codeword &setToZero();
    Codeword &operator+=(const int w[]);
    Codeword &operator=(const int w[]);
    int &operator[](int i) const;
};

inline bool operator==(const Codeword &w1, const int *w2)
{
    int count = 0;
    for (int i = 0; i < w1.getLength(); i++) {
        if (w1[i] == w2[i])
            count++;
    }

    return count == w1.getLength();
};
