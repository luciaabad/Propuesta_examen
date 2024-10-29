#include "triplespitagoricos.h"
#include <iostream>
#include <cmath>

void encontrarTriplesPitagoricos(int max) {
    for (int a = 1; a <= max; ++a) {
        for (int b = a; b <= max; ++b) { // b comienza en a para evitar duplicados
            int c_squared = a * a + b * b;
            int c = static_cast<int>(sqrt(c_squared));

            if (c * c == c_squared && c <= max) { // Verifica si c es entero
                std::cout << a << " - " << b << " - " << c << "\n";
            }
        }
    }
}
