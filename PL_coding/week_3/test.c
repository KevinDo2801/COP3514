#include <stdio.h>
int main(void) {
    char grade = 'A';
  switch (grade) {
  case 'A':
  case 'B':
  case 'C':
  case 'D':
    printf("Passing");
    break;
  case 'F':
    printf("Failing");
    break;
  default:
    printf("Illegal grade");
}
  return 0;
}