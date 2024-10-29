#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double c;

    printf("Triples pitagóricos encontrados:\n");

    // Iteramos a través de valores para el lado a
    for (a = 1; a <= 20; a++) {
        // Iteramos a través de valores para el lado b
        for (b = 1; b <= 20; b++) {
            c = sqrt (a * a + b * b);
            if (c == (int)c) {
                if (a + b > c && a + c > b && b + c > a) {
                    printf("%d - %d - %d\n", a, b, (int)c);

                }
            }
        }
    }
    return 0;
}