/*
 * Red and blue - stripes
 */

#include <stdio.h>

int main() {
    char m[8][8];
    for (int y = 0; y < 8; ++y) {
        char line[8];
        printf("line: ");
        scanf("%s", line);
        for (int x = 0; x < 8; ++x) {
            m[y][x] = line[x];
        }
    }

    for (int x = 0; x < 8; ++x) {
        char first_c = m[0][x];
        if (first_c == '.') {
            continue;
        }

        for (int y = 0; y < 8; ++y) {
            if (m[y][x] != first_c) {
                first_c = '.';
                break;

            }
        }
        if (first_c != '.') {
            printf("last colour: %c", first_c);
            break;
        }
    }

    for (int y = 0; y < 8; ++y) {
        char first_c = m[y][0];
        if (first_c == '.') {
            continue;
        }

        for (int x = 0; x < 8; ++x) {
            if (m[y][x] != first_c) {
                first_c = '.';
                break;

            }
        }
        if (first_c != '.') {
            printf("last colour: %c", first_c);
            break;
        }
    }
    return 0;
}