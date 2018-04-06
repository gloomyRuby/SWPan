//
// Created by Oysha on 05/04/2018.
//

#pragma once

#include <cmath>
#include <ctime>
#include <limits>

struct CHANGE {
    int n_change;
    int position[128];
};

void order(int **Gg_t, double R[128], double out_D[128]);

