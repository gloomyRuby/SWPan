//
// Created by Oysha on 15/04/2018.
//

#pragma once


class Codeword
{
    int codeword[129];
    int length = 4;
public:
    Codeword(int _length);
    Codeword(const int line[]);

    int weight() const;
    int getLength() const;
    Codeword &setToZero();
    Codeword &operator+=(const int w[]);
    Codeword &operator=(const int w[]);
    int &operator[](int i);
};

inline void operator^=(Codeword &w1, const int *w2)
{
    for (int i = 0; i < w1.getLength(); ++i) {
        w1[i] ^= w2[i];
    }
}

//inline bool operator==(const Codeword &w1, const int *w2)
//{
//    int count = 0;
//    for (int i = 0; i < w1.getLength(); i++) {
//        if (w1[i] == w2[i])
//            count++;
//    }
//
//    return count == w1.getLength();
//};
//

