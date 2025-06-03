#include <stdio.h>

int sum(int num) {
    return (num * (num + 1)) / 2;
}

int main() {
    printf("%d ", sum(55));  // Affiche 1540
    printf("%d ", sum(45));  // Affiche 1035
    printf("%d ", sum(50));  // Affiche 1275
    return 0;
}

