#pragma once

void input_ship(int N, struct position *ship);
struct fig input_triangle();
void input_triangle(struct fig * triangle);
struct position input_port();

void matrix_of_slopes(int N, struct position *ship, struct fig triangle,
                      struct position port, float (*slopes)[4]);

void danger_identification (int N, float (*slopes)[4], int *danger);

void danger_signal (int N, int *danger);
