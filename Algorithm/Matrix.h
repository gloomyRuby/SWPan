//
// Created by Oysha on 15/04/2018.
//


#pragma once

#include "Codeword.h"
#include <cstdint>

struct Int128
{
    int num[128] = { 0 };
    int *p = num, k = 128;

    explicit Int128() {};
    // initialize number = (1 << k) - 1
    explicit Int128(int _k) {
        k = _k;
        for (int i = 0; i < k; ++i)
            num[i] = 1;
    }
    Int128 &operator>>=(int) {  *p = 0; p++; return  *this; }
    Int128 &operator--();
    Int128 &operator=(Int128 &a);
    int operator&(int) { return *p; }

    Int128 & setToZero();
};

void binaryWordCreator(Int128 k, Codeword &binaryWord);

class Matrix
{
    int k, n, d, matrix[128][128] = { 0 };
    Matrix();
public:
    explicit Matrix(int _k);
    int sptr[128] = { 0 };

    int getK() { return  k; }
    int getN() { return n; }
    int getMinDist() { return d; }
    int getByIndex(int i, int j) { return matrix[i][j]; }
    bool isNewBetter(const int *sptr1, const int *sptr2);
    void spectrum(Matrix &m);

    // this = m
    Matrix &operator=(Matrix &m);
    Matrix &addRow();
    Matrix &findMinDist();
    Matrix &random(int _k);
    Matrix &addRandomRow();
    Matrix &setByIndex(int i, int j, int value);
    // function for testing
    Matrix &hamming();
};


class SpectrumSolver
{
public:
    void getSpectrum(Matrix &gMatrix);

    void generateWord(Codeword &codeword, Matrix &m, int line, int length);
};


// NOTE: comparison only with zero
inline bool operator!=(Int128 &a, int) {
    for (int i = 0; i < a.k; ++i) {
        if (a.num[i] != 0)
            return true;
    }
    return false;
}

// NOTE: comparison only with zero
inline bool operator>(Int128 &a, int) {
    int i = a.k - 1;
    while (a.num[i] == 0)
        i--;
    return (i < 0);
}
