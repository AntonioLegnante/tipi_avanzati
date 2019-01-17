//cast

#include <stdio.h>

int main ()
{
    double numero;
    int intero;

    printf("inserisci un numero reale\t");
    scanf("%lf",&numero);
    
    intero = (int)numero; 
    
    printf("il numero reale e' %lf , mentre il numero intero e' %d",numero,intero);
    
    return 0;
}