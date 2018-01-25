//
// Created by Oysha on 25/01/2018.
//

#include <fstream>
#include "FileSpectrumWriter.h"

void FileSpectrumWriter::writeSpectrumInFile(int *spectrum, int count) const
{
    std::ofstream output;
    output.open("spectrum.txt");

    for (int i = 0; i < count; ++i) {
        output << spectrum[i] << "\n";
    }

    output.close();
    free(spectrum);
}
