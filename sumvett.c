/*uso dei vettori*/

#include <stdio.h>

int main ()
{
    int vettore[3], somma=0;
    float media;

    printf("inserisci 3 numeri\n");
    scanf("%d",&vettore[0]);
    scanf("%d",&vettore[1]);
    scanf("%d",&vettore[2]);
    somma = vettore[0] + vettore[1] + vettore[2];

    media = (float) somma / 3.0;
    
    printf("i numeri inseriti sono %d %d %d e la somma tra loro e' %d mentre la loro media e' %f", vettore[0], vettore[1], vettore[2] , somma, media);

    return 0;
}
    
    
    
    