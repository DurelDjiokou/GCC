#include <stdio.h>

int main() {
  int grades[3];  // Déclaration du tableau
  int average;

  grades[0] = 80;
  grades[1] = 85; // Note manquante pour faire 85 de moyenne
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}

