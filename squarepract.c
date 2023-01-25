#include <stdio.h>
#include <math.h>
 
#define PI 3.14159
 
int main() {
  int a, b, c;
  float p, S;
 
  printf("Привет! Введи ширину и высоту прямоугольника: ");
  scanf("%d%d", &a,&b);
  printf("P = %d; S = %d\n\n", (a+b)*2, a*b);
}