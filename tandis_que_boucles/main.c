#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        if (array[i] % 2 == 0) {  // Si le nombre est pair
            printf("%d\n", array[i]);
        }
        i++;
    }

    return 0;
}

