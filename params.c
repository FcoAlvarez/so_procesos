#include<stdio.h>

int main(int argc, char *argv[])
{
  int count = argc;
  printf("\n Numero de argumentos son [%d] \n", count);

  int c = 0;
  while(c < count)
  {
    printf("\n El argumento [%d] es : [%s]\n", c+1, argv[c]);
    c++;
  }
  return 0;
}