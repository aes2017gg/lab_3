#include <stdio.h>
#include "structures.h"
#include "main.h"

int main() {
    int N = 0;
    scanf("%d", &N);

    struct position ship[50];
    struct fig triangle;
    struct position port;
    float slopes[50][4] = {};
    int danger[50] = {};

    input_ship(N, ship);
    triangle = input_triangle();
    port = input_port();

    matrix_of_slopes(N, ship, triangle, port, slopes);

    danger_identification(N, slopes, danger);
    
    void danger_signal (int N, int *danger);

    return 0;
}
