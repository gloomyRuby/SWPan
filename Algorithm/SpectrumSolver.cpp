//
// Created by Oysha on 23/01/2018.
//

#include "SpectrumSolver.h"
#include "Codeword.h"

int binpow(int n);
void binaryWordCreator(const int k, Codeword &binaryWord);


int *SpectrumSolver::getSpectrum(int **GMatrix, const int n, const int k) const
{
    int *spectrum = (int*)calloc(n + 1, sizeof(int));
    for (int i = 0; i <= n; ++i) {
        spectrum[i] = 0;
    }

    Codeword codeword = Codeword(n);
    Codeword binaryWord = Codeword(k);
    int count = binpow(k);

    for (int i = 0; i < count; i++) {
        binaryWordCreator(k, binaryWord);
        for (int l = k - 1; l >= 0; l--) {
            if (binaryWord[l] != 0) {
                codeword += GMatrix[l];
            }
        }
        int weight = codeword.weight();
        spectrum[weight]++;
        codeword.setToZero();
    }

    return spectrum;
}

int binpow(int n)
{
    int res = 1;
    int a = 2;
    while (n) {
        if (n & 1) {
            res *= a;
            --n;
        }
        else {
            a *= a;
            n >>= 1;
        }
    }
    res--;
    return res;
}

void binaryWordCreator(const int k, Codeword &binaryWord)
{
    for (int j = k - 1; j >= 0; j--) {
        if (binaryWord[j] == 0) {
            binaryWord[j] = 1;
            break;
        } else {
            binaryWord[j] = 0;
        }
    }
}
