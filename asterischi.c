//stampa degli asterischi a distanza di 700 secondi tra di loro

#include <stdio.h>
#include <time.h>

int main () 
{
    struct timespec intervallo;
    intervallo.tv_sec = 0;
    intervallo.tv_nsec = 700 * 1000 * 1000;
    
    printf("*\n");
    nanosleep(&intervallo,NULL);
   
    printf("*\n");
    nanosleep(&intervallo,NULL);
  
    printf("*\n");
    nanosleep(&intervallo,NULL);

return 0;
}
    
    