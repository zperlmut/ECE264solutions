#include <stdio.h>
#include <stdlib.h>
#include "answer06.h"

int main(int argc, char **argv)
{
  if(argc != 2) return EXIT_FAILURE;
  int value = atoi(argv[1]);
  partitionAll(value);
  partitionIncreasing(value);
  //partitionDecreasing(value);
  /* partitionOdd(value);
  printf("\n\n\n");
  partitionEven(value);
  printf("\n\n\n");
  */
  //partitionPrime(value);  
  //printf("\n\n\n");

  return EXIT_SUCCESS;


}
