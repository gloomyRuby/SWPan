//
// Created by Oysha on 25/01/2018.
//

#include "SpectrumWriter.h"


void SpectrumWriter::writeSpectrum(const int *spectrum, int count) const
{
    for (int i = 0; i < count; ++i) {
       std::cout << spectrum[i] << "\n";
    }
}
