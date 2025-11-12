#include <stdio.h>

int main() {
    int RGB[3][3][3];
    int r, g, b;

    for (r = 0; r < 3; r++) {
        for (g = 0; g < 3; g++) {
            for (b = 0; b < 3; b++) {
                RGB[r][g][b] = r * 100 + g * 50 + b * 25;  // intensity pattern
            }
        }
    }
    printf("RGB Color Cube Values:\n");
    for (r = 0; r < 3; r++) {
        for (g = 0; g < 3; g++) {
            for (b = 0; b < 3; b++) {
                printf("R=%3d  G=%3d  B=%3d  ? Value=%3d\n", 
                       r * 100, g * 50, b * 25, RGB[r][g][b]);
            }
        }
    }

    return 0;
}

