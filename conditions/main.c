#include <stdio.h>

void guessNumber(int guess) {
    int target = 555; // le nombre à deviner

    if (guess < target) {
        printf("Trop petit !\n");
    } else if (guess > target) {
        printf("Trop grand !\n");
    } else {
        printf("Bravo, vous avez deviné le bon nombre !\n");
    }
}

int main() {
    guessNumber(500);  // Affiche : Trop petit !
    guessNumber(600);  // Affiche : Trop grand !
    guessNumber(555);  // Affiche : Bravo, vous avez deviné le bon nombre !
}

