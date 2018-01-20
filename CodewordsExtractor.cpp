//
// Created by Oysha on 20/01/2018.
//

#include "CodewordsExtractor.h"

Codeword *CodewordsExtractor::generateCodewords(const Codeword GMatrix[], int &n, int &k)
{
    unsigned long long int count = binpow(k);
    auto codewords = new Codeword[count];

    count = 0;
    for (int i = 0; i < k; ++i) {
        if (distance < GMatrix[i].weight()) {
            distance = GMatrix[i].weight();
        }
        Codeword binaryWord;
        binaryWordCreator(k, binaryWord);

        if (binaryWord[i] != 0) {
            codewords[count] = GMatrix[i];
            for (int j = i + i; j < k; ++j) {
                if (binaryWord[j] != 0)
                    codewords[count] += GMatrix[j];
            }
            count++;
        }
    }
    return codewords;
}

void CodewordsExtractor::binaryWordCreator(const int &k, Codeword &binaryWord) const
{
    for (int j = 0; j < k; ++j) {
            if (binaryWord[j] == 0) {
                binaryWord[j] = 1;
                break;
            } else {
                binaryWord[j] = 0;
            }
        }
}
