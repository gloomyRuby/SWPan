//
// Created by Oysha on 20/01/2018.
//

#include "Assert.h"

void Assert::assertTrue(bool expression)
{
    if (!expression) {
        throw Failure();
    }
}
