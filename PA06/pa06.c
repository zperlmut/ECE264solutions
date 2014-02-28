#include <stdio.h>
#include <stdlib.h>
#include "answer06.h"

int main(int argc, char **argv)
{
  if(argc != 2) return EXIT_FAILURE;
  int value = atoi(argv[1]);
  /*  printf("\npartitionALL\n");
  partitionAll(value);
  printf("\npartitionIncreasing\n");
  partitionIncreasing(value);
  printf("\npartitionDecreasing\n");
  partitionDecreasing(value);
  printf("\npartitionOdd\n");
  partitionOdd(value);
  printf("\npartitionEven\n");
  partitionEven(value);
  */
  printf("\npartitionOddAndEven\n");
  partitionOddAndEven(value);
  // printf("\npartitionPrime\n");
  // partitionPrime(value);  

  

  return EXIT_SUCCESS;


}
