cmake_minimum_required(VERSION 3.8)
project(ScienceWork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Readers/MatrixReader.cpp Readers/MatrixReader.h Tests/Readers/MatrixReaderTest.cpp Tests/Readers/MatrixReaderTest.h Tests/Assert.cpp Tests/Assert.h Algorithm/Codeword.cpp Algorithm/Codeword.h Algorithm/SpectrumSolver.cpp Algorithm/SpectrumSolver.h Tests/Algorithm/SpectrumSolverTest.cpp Tests/Algorithm/SpectrumSolverTest.h Writers/SpectrumWriter.cpp Writers/SpectrumWriter.h Readers/FileMatrixReader.cpp Readers/FileMatrixReader.h Writers/FileSpectrumWriter.cpp Writers/FileSpectrumWriter.h Algorithm/OSD.cpp Algorithm/OSD.h)
add_executable(ScienceWork ${SOURCE_FILES})