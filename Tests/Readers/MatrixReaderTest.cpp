//
// Created by Oysha on 20/01/2018.
//

#include "MatrixReaderTest.h"


void MatrixReaderTest::test()
{
    twoByTwoTest();
    twoByThreeTest();

}

void MatrixReaderTest::twoByTwoTest() const
{
    MatrixReader sut;

    // given
    std::string data("2 2\n 1 2\n 3 4\n");
    std::istringstream input(data);

    // when
    int **matrix = sut.getGeneratorMatrix(input);

    // then
    Assert::assertTrue(matrix[0][0] == 1);
    Assert::assertTrue(matrix[0][1] == 2);
    Assert::assertTrue(matrix[1][0] == 3);
    Assert::assertTrue(matrix[1][1] == 4);
}

void MatrixReaderTest::twoByThreeTest() const
{
    MatrixReader sut;

    // given
    std::string data("3 2\n 1 2 3\n 4 5 6\n");
    std::istringstream input(data);

    // when
    int **matrix = sut.getGeneratorMatrix(input);

    // then
    Assert::assertTrue(matrix[0][0] == 1);
    Assert::assertTrue(matrix[0][1] == 2);
    Assert::assertTrue(matrix[0][2] == 3);
    Assert::assertTrue(matrix[1][0] == 4);
    Assert::assertTrue(matrix[1][1] == 5);
    Assert::assertTrue(matrix[1][2] == 6);
}
