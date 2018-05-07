//
// Created by Oysha on 23/01/2018.
//

#include "Matrix.h"


void SpectrumSolver::getSpectrum(Matrix &gMatrix)
{
    int k = gMatrix.getK();
    int n = gMatrix.getN();

    gMatrix.sptr[0] = 1;
    for (int i = 1; i <= n; ++i) {
        gMatrix.sptr[i] = 0;
    }

    Codeword codeword = Codeword(n);
    Codeword binaryWord = Codeword(k);

    for (Int128 i(k); i != 0; --i) {
        binaryWordCreator(i, binaryWord);
        for (int j = 0; j < k; ++j) {
            if (binaryWord[j] == 1)
                generateWord(codeword, gMatrix, j, n);
        }
        gMatrix.sptr[codeword.weight()]++;
        codeword.setToZero();
        binaryWord.setToZero();
    }
}

void SpectrumSolver::generateWord(Codeword &codeword, Matrix &m, int line, int length)
{
    for (int i = 0; i < length; i++) {
        codeword[i] ^= m.getByIndex(line, i);
    }
}
