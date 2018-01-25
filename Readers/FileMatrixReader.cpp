//
// Created by Oysha on 25/01/2018.
//

#include "FileMatrixReader.h"

int **FileMatrixReader::getGMatrixFromFile(std::string &filename) const
{
    std::ifstream input;
    input.open(filename);

    int **GMatrix = getGeneratorMatrix(input);

    input.close();

    return GMatrix;
}
