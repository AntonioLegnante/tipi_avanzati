//uso dei vettori

#include <stdio.h>

int main ()
{
    int numero,vettore[3],somma=0,i;
    float media,somma_float;

    printf("inserisci 3 numeri");
    
    for (i=0;i<3;i++)
    {
        scanf("%d",&numero);
        vettore[i] = numero;
        somma += vettore[i];
    }
    
    somma_float = (float) somma;
    media = somma / 3.0;
    
    printf("la somma e' %d mentre la media e' %f e i numeri inseriti sono",somma,media);
    for (i=0;i<3;i++)
        printf("%d",vettore[i]);

    return 0;
}
    
    
    
    