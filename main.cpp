#include <iostream>
#include "Triples_pitagoricos/triplespitagoricos.h"

int main() {
    int max = 20; // Máximo valor para a y b
    std::cout << "Triples pitagóricos encontrados:\n";
    encontrarTriplesPitagoricos(max);

    return 0;
}