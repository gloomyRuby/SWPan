cmake_minimum_required(VERSION 3.8)
project(ScienceWork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MatrixReader.cpp MatrixReader.h Tests/Readers/MatrixReaderTest.cpp Tests/Readers/MatrixReaderTest.h Tests/Assert.cpp Tests/Assert.h Algorithm/Codeword.cpp Algorithm/Codeword.h Algorithm/SpectrumSolver.cpp Algorithm/SpectrumSolver.h Tests/Algorithm/SpectrumSolverTest.cpp Tests/Algorithm/SpectrumSolverTest.h)
add_executable(ScienceWork ${SOURCE_FILES})