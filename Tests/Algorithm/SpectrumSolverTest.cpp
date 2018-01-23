//
// Created by Oysha on 23/01/2018.
//

#include "SpectrumSolverTest.h"
#include "../Assert.h"
#include "../../Algorithm/Codeword.h"


void SpectrumSolverTest::test() const
{
    SpectrumSolver sut;

    // given
    const int N = 3;
    const int K = 2;
    int **GMatrix;
    GMatrix = static_cast<int **>(calloc(K, sizeof(int *)));
    for (int i = 0; i < N; ++i) {
        GMatrix[i] = static_cast<int *>(calloc(N, sizeof(int)));
    }

    GMatrix[0][0] = 0;
    GMatrix[0][1] = 1;
    GMatrix[0][2] = 1;
    GMatrix[1][0] = 1;
    GMatrix[1][1] = 0;
    GMatrix[1][2] = 1;

    // when
    int *spectrum = sut.getSpectrum(GMatrix, N, K);

    // then
    Assert::assertTrue(spectrum[0] == 0);
    Assert::assertTrue(spectrum[1] == 0);
    Assert::assertTrue(spectrum[2] == 3);
    Assert::assertTrue(spectrum[3] == 0);

    for (int i = 0; i < K; ++i) {
        free(GMatrix[i]);
    }
    free(GMatrix);
    free(spectrum);
}
