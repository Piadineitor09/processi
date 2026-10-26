
/**
 * fork01.c - Riccardo Zanghì - 12/10/2026
 * pid = identificativo del processo in esecuzione
 *
 * gcc fork01.c
 * ./a.out
 * v1.0
 */
#include <stdio.h>  // printf
#include <unistd.h> // getpid

int main(int argc, char **argv)
{

  printf("\nAvvio del processo con pid=%d\n", getpid());
}

// Possibile output:
// Avvio del processo con pid=54321
