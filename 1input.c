#include <stdio.h>
#include "structures.h"
#include "main.h"

struct position input_port() {
    struct position p;
    scanf("%d %d %d %d %d %d", &p.lat.degree, &p.lat.minute, &p.lat.second, &p.longitude.degree, &p.longitude.minute,
          &p.longitude.second);
    return p;
}

struct fig input_triangle() {
    struct fig f;
    f.apex1 = input_port();
    f.apex2 = input_port();
    f.apex3 = input_port();
    return f;
}

void input_ship(int N, struct position* Ship) {
    for (int i=0; i<N; i++) {
        *(Ship+i) = input_port();
    }
}

void input_Triangle(struct fig *Triangle) {
    *Triangle = input_triangle();
}
