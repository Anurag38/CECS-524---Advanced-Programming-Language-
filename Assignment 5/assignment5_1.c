#include <stdio.h>
#include <stdbool.h>
int main() {
  int a = 10;
  printf("Integer: %d\n\n", a);

  unsigned int b = 11111111;
  printf("Unsigned Integer: %u\n\n", b);

  long int c = 11111111111111;
  printf("Long Integer: %ld\n\n", c);

  unsigned long int d = 11111111111111;
  printf("Unsigned Long Integer: %lu\n\n", d);

  long long int e = -11111111111111111;
  printf("Long Long Integer: %lld\n\n", e);

  short f = -111;
  printf("Short Integer: %hi\n\n", f);

  unsigned short g = 11;
  printf("Unsigned Short Integer: %hu\n\n", g);

  
  float h = 1.11111;
  printf("Float: %f\n\n", h);

  double i = 111111111111;
  printf("Double: %f\n\n", i);

  long double j = 111111111111111;
  printf("Long Double: %Lf\n\n", j);
  

  char k = 'w';
  printf("Character: %c\n\n", k);

  unsigned char l = 'o';
  printf("Unsigned Character: %u\n\n", l);

  return 0;
}
