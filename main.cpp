#include <iostream>
#include "Algorithm/Matrix.h"
#include <ctime>

int main() {
    int k;
    std::cin >> k;

    clock_t begin = clock();
    Matrix m(k);
    clock_t end = clock();
    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    std::cout.precision(3);
    std::cout << "k\tn\td\ttime\n";
    for (int i = k; i < 110; ++i) {
        std::cout << k << '\t' << i << '\t' << m.getMinDist() << '\t' << time << '\n';
        begin = clock();
        m.addRow();
        end = clock();
        time = (double)(end - begin) / CLOCKS_PER_SEC;
    }

    return 0;
}
