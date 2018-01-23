#include <iostream>
#include "MatrixReader.h"
#include "Tests/Readers/MatrixReaderTest.h"
#include "Tests/Algorithm/SpectrumSolverTest.h"


int main()
{
    MatrixReaderTest readerTest;
    readerTest.test();

    SpectrumSolverTest spectrumSolverTest;
    spectrumSolverTest.test();
    
    return 0;
}