#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <time.h>

#define  MAX_COUNT 20
char *barras[5] = {"*","**","***","****","*****"};

void ChildProcess(void);                          /* prototipo proceso hijo  */
void ParentProcess(void);                         /* prototipo proceso padre */


void main(void)
{
     pid_t     pid;
     
     pid = fork();
     if (pid == 0) 
        ChildProcess();
     else
         ParentProcess();
}


void ChildProcess(void)
{
     int i;
     
     for (i= MAX_COUNT; i>0 ; i--)
     {
         printf("\t\th-%s\n",barras[i%5]);
         sleep(i%5);
     }
     printf("    *** Fin proceso hijo   ***\n");
}

void ParentProcess(void)
{
     int i,h;
     
     for (i= 1; i<=MAX_COUNT ; i++)
     {
         printf("\tp-%s\n",barras[i%5]);
         sleep(i%5);
     }
     printf("    *** Fin proceso padre   ***\n");
}