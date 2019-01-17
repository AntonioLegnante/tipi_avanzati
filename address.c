//uso delle variabili puntatore 

#include <stdio.h>

int main () 
{
    float variabile,*variabile_puntatore;
    
    variabile_puntatore = & variabile;
    
    printf("l'indirizzo della variabile e' %p",*variabile_puntatore);

return 0;
}
    