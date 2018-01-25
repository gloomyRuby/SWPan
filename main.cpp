#include <iostream>
#include "Readers/MatrixReader.h"
#include "Tests/Readers/MatrixReaderTest.h"
#include "Tests/Algorithm/SpectrumSolverTest.h"
#include "Writers/SpectrumWriter.h"
#include "Writers/FileSpectrumWriter.h"


int main()
{
    std::string data("3 2\n 0 1 1\n 1 0 1\n");
    std::istringstream input(data);
    MatrixReader read;
    int **matrix = read.getGeneratorMatrix(input);

    SpectrumSolver spectrum;
    int * sp = spectrum.getSpectrum(matrix, 3, 2);

    FileSpectrumWriter spectrumWriter;
    spectrumWriter.writeSpectrumInFile(sp, 4);

    return 0;
}