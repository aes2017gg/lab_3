#include "structures.h"
#include "main.h"
#include "identification.h"

int analyze_positions(float pos1, float pos2, float ship) {
    return pos1 < ship && ship < pos2;
}

void danger_identification(int N, float (*slopes)[4], int *danger) {
    for (int i = 0; i < N; i++) {
        for (int pos1_index = 0; pos1_index < 3; pos1_index++) {
            for (int pos2_index = 0; pos2_index < 3; pos2_index++) {
                if (pos1_index == pos2_index) {
                    continue;
                }

                int result = analyze_positions(slopes[i][pos1_index],
                                               slopes[i][pos2_index], 
                                               slopes[i][3]);

                if (result) {
                    danger[i] = 1;
                    break;
                }
            }
        }
    }
}
