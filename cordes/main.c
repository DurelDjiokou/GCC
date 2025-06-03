#include <stdio.h>
#include <string.h>

int main() {
  char first_name[] = "John";
  char last_name[] = "Boe";
  char name[100];

  // Construire "John Boe"
  sprintf(name, "%s %s", first_name, last_name);

  if (strncmp(name, "John Boe", 100) == 0) {
      printf("Done!\n");
  }

  // Vider et concaténer partiellement
  name[0]='\0';
  strncat(name, first_name, 4);  // "John"
  strncat(name, last_name, 20);  // "Boe" → résultat: "JohnBoe"
  printf("%s\n", name);

  return 0;
}

