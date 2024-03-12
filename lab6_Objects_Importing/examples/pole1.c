#include <stdio.h>


void main(void)
{
float a, b;          // deklaracja zmiennych przechowujących boki prostokąta
float area;          // deklaracja zmiennej z wynikiem obliczeń
printf("Podaj długości boków: ");
scanf("%f %f", a, b);   
area = a * b;        // obliczamy pole prostokąta
prinf("\nPole prostokąta = %f\n", area);
}