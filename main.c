#include <stdio.h>

int min_steps(int x, int y) {
    int dist = y - x;
    int step = 1, pos = 0, count = 0;

    while (1) {
        count++;
        pos += step;
        if (pos >= dist) break;
        if (count % 2 == 0) step++;
    }
    return count;
}

int main() {
    int x, y;
    printf("Введіть значення x і y (через пробіл): ");
    scanf("%d %d", &x, &y);

    printf("Мінімальна кількість кроків: %d\n", min_steps(x, y));

    return 0;
}
