//
// Created by Oysha on 20/01/2018.
//


#pragma once


class Assert
{
public:
    struct Failure {};

    static void assertTrue(bool expression);
};
