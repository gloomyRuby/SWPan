//
// Created by Oysha on 03/05/2018.
//

#include <cstdlib>
#include "Matrix.h"


Matrix::Matrix() = default;

Matrix::Matrix(int _k)
{
    n = k = _k;
    for (int i = 0; i < _k; ++i) {
        matrix[i][i] = 1;
    }
    spectrum(*this);
}

void Matrix::spectrum(Matrix &m)
{
    SpectrumSolver a;
    a.getSpectrum(m);
    m.findMinDist();
}

Matrix &Matrix::addRow()
{
    this->n++;
    Matrix newM;
    newM = *this;

    // look over all binaryWords to find out the best row
    Codeword binaryWord = Codeword(k);
    for (Int128 i(k); i != 0; --i) {
        binaryWordCreator(i, binaryWord);
        for (int l = 0; l < k; ++l) {
            newM.setByIndex(l, n - 1, binaryWord[l]);
        }

        spectrum(newM);

        if (isNewBetter(newM.sptr, this->sptr))
            *this = newM;
    }

    return *this;
}

// NOTE: this operator realizes *this = m
Matrix &Matrix::operator=(Matrix &m)
{
    this->k = m.getK();
    this->n = m.getN();
    this->d = m.d;

    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = m.getByIndex(i, j);
        }
    }
    for (int i = 0; i <= n; ++i) {
        this->sptr[i] = m.sptr[i];
    }

    return *this;
}

bool Matrix::isNewBetter(const int *sptr1, const int *sptr2)
{
    // if sptr1 better than sptr2 returns true
    // better means: s1[0] = s2[0], s1[1] = s2[1],.., s1[i] = s2[i], BUT s1[i + 1] < s2[i + 1] ...
    int i = 0;
    while (sptr1[i] == sptr2[i])
        i++;
    return (sptr1[i] < sptr2[i]);
}

Matrix &Matrix::random(int _k)
{
    for (int i = 0; i < _k; ++i)
        for (int j = 0; j < _k; ++j)
            matrix[i][j] = RAND_MAX % 2;

    spectrum(*this);

    return *this;
}

Matrix &Matrix::findMinDist()
{
    for (int i = n - 1; i > 0; i--)
        if (this->sptr[i] != 0)
            d = i;
    return *this;
}

Matrix &Matrix::setByIndex(int i, int j, int value)
{
    matrix[i][j] = value;
    return *this;
}

Matrix &Matrix::hamming()
{
    this->setByIndex(0, 4, 1);
    this->setByIndex(1, 4, 1);
    this->setByIndex(2, 4, 1);

    this->setByIndex(1, 5, 1);
    this->setByIndex(2, 5, 1);
    this->setByIndex(3, 5, 1);

    this->setByIndex(0, 6, 1);
    this->setByIndex(1, 6, 1);
    this->setByIndex(3, 6, 1);

    n = 7;

    spectrum(*this);
    return *this;
}

Matrix &Matrix::addRandomRow()
{
    n++;
    for (int i = 0; i < k; ++i) {
        int a = RAND_MAX % 2;
        this->setByIndex(i, n - 1, a);
    }
    return *this;
}

Int128 &Int128::operator--()
{
    int *tmp = num;
    while (*tmp == 0)  {
        *tmp = 1;
        tmp++;
    }
    *tmp = 0;
    return *this;
}

Int128 &Int128::operator=(Int128 &a)
{
    this->setToZero();
    for (int i = 0; i < a.k; ++i) {
        this->num[i] = a.num[i];
    }
    this->k = a.k;
    return *this;
}

Int128 &Int128::setToZero()
{
    for (int &i : this->num)
        i = 0;
    return *this;
}

void binaryWordCreator(Int128 k, Codeword &binaryWord)
{
    int j = 0;
    Int128 i;
    i = k;
    binaryWord.setToZero();
    while (i != 0) {
        binaryWord[j] = (i & 1);
        i >>= 1;
        j++;
    }
}
