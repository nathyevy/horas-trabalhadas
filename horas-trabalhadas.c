#include <stdio.h>

int main(){
float horas, valor, total;

    printf("Quantas horas por dia você trabalha? \n");
    scanf ("%f", &horas);
    printf ("Quanto você recebe por hora trabalhada? \n");
    scanf ("%f", &valor);
    total = valor * horas;
    printf  ("Por dia você recebe %.2f", total);
return 0;

}