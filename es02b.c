/** rettangolo.c
 * fork02.c - Riccardo Zanghì - 18/10/2026
 * Il padre calcola e stampa l'area, il figlio stampa il perimetro
 * v1.0
 */
#include <stdio.h>  // printf
#include <unistd.h> // getpid, fork

int main()
{

    int base = 8;
    int altezza = 5;
    int risultato;

    int pid = fork();
    if (pid == 0)
    {
        /* codice figlio */
        risultato = 2 * (base + altezza);
        printf("Sono il figlio! (pid: %d) - Perimetro = %d\n", getpid(), risultato);
    }
    else if (pid > 0)
    {
        /* codice padre */
        risultato = base * altezza;
        printf("Sono il padre! (pid: %d) - Area = %d\n", getpid(), risultato);
    }
    else
    { // pid<0
        printf("Creazione del processo figlio fallita!\n");
    }
}