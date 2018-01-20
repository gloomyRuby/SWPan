//
// Created by Oysha on 20/01/2018.
//


#pragma once

#include <string>
#include <sstream>
#include <zconf.h>
#include "../../MatrixReader.h"
#include "../Assert.h"


class MatrixReaderTest
{
public:
    void test();

private:
    void twoByTwoTest() const;
    void twoByThreeTest() const;
};
