cmake_minimum_required(VERSION 3.8)
project(ScienceWork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Codeword.cpp Codeword.h MatrixReader.cpp MatrixReader.h CodewordsExtractor.cpp CodewordsExtractor.h Tests/Readers/MatrixReaderTest.cpp Tests/Readers/MatrixReaderTest.h Tests/Assert.cpp Tests/Assert.h)
add_executable(ScienceWork ${SOURCE_FILES})