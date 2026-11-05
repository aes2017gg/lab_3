#include "structures.h"
#include "main.h"

int coord_to_second (struct coordinates x) {
    return x.degree * 3600 + x.minute * 60 + x.second;
}

float angle (struct position dot, struct position ship) {
    return (float)(coord_to_second(dot.lat) - coord_to_second(ship.lat)) / (float)(coord_to_second(dot.longitude) - coord_to_second(ship.longitude));
}

void matrix_of_slopes (int N, struct position *ship, struct fig triangle, struct position port, float (*slopes)[4]) {
    for (int i = 0; i < N; ++i) {
        slopes[i][0] = angle (triangle.apex1, ship[i]);
        slopes[i][1] = angle (triangle.apex2, ship[i]);
        slopes[i][2] = angle (triangle.apex3, ship[i]);
        slopes[i][3] = angle (port, ship[i]);
    }
}
