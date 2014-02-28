#include <stdio.h>
#include <stdlib.h>
#include "answer06.h"


void printpartition(int *partition, int len)
{
  int i;
  printf(" = ");
  for (i = 0; i < len; i++){
    if (i != 0) printf (" + ");
    printf("%d", partition[i]);
  }
  printf("\n");
} 

void partitionAllHelper(int budget, int *partition, int pos)
{

  //BASE CASE!!!
  if (budget == 0){
    printpartition(partition, pos);
    return;
  }
  

  //INDUCTIVE CASE!!!!!
  int spending;
  for(spending = 1; spending <= budget; spending+= 1){
    partition[pos] = spending;
    partitionAllHelper(budget - spending, partition, pos + 1);
  }
}


void partitionAll(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionAllHelper(value, partition, 0);
  free(partition);

}

void partitionIncreasingHelper(int budget, int *partition, int pos)
{
  //BASE CASE!!!
  if (budget == 0){
    printpartition(partition, pos);
    return;
  }  

  //INDUCTIVE CASE!!!!!
  int spending;
  int start = pos == 0 ? 1 : partition[pos - 1] + 1;
  for(spending = start; spending <= budget; spending++){
    partition[pos] = spending;
    partitionIncreasingHelper(budget - spending, partition, pos + 1);
  }
}

void partitionIncreasing(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionIncreasingHelper(value, partition, 0);
  free(partition);

}

void partitionDecreasingHelper(int budget, int *partition, int pos)
{
  //BASE CASE!!!
  if (budget == 0){
    printpartition(partition, pos);
    return;
  }  

  //INDUCTIVE CASE!!!!!
  int spending;
  int start = pos == 0 ? budget : partition[pos - 1] - 1;
  for(spending = start; spending > 0 ; spending--){
    partition[pos] = spending;
    partitionDecreasingHelper(budget - spending, partition, pos + 1);
  }
}

void partitionDecreasing(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionDecreasingHelper(value, partition, 0);
  free(partition);

}

void partitionOddHelper(int budget, int *partition, int pos)
{
  //BASE CASE!!!
  if (budget == 0){
    printpartition(partition, pos);
    return;
  }  

  //INDUCTIVE CASE!!!!!
  int spending;
  for(spending = 1; spending <= budget ; spending += 2){
    partition[pos] = spending;
    partitionOddHelper(budget - spending, partition, pos + 1);
  }
}

void partitionOdd(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionOddHelper(value, partition, 0);
  free(partition);

}


void partitionEvenHelper(int budget, int *partition, int pos)
{
  //BASE CASE!!!
  if (budget <= 0){
    printpartition(partition, pos);
    return;
  }  

  //INDUCTIVE CASE!!!!!
  int spending;
  for(spending = 2; spending <= budget ; spending += 2){
    partition[pos] = spending;
    partitionEvenHelper(budget - spending, partition, pos + 1);
  }
}

void partitionEven(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionEvenHelper(value, partition, 0);
  free(partition);
}

int Isprime (int num)
{
  int i;
  for(i = 2; i < num; i++){
    if (num % i == 0) return 0;
  }
  return 1;
}

void partitionPrimeHelper(int budget, int *partition, int pos)
{
  //BASE CASE!!!
  if (budget == 0){
    printpartition(partition, pos);
    return;
  }  

  //INDUCTIVE CASE!!!!!
  int spending;
  for(spending = 2; spending <= budget ; spending++){
    if(!Isprime(spending)) continue;
    partition[pos] = spending;
    partitionPrimeHelper(budget - spending, partition, pos + 1);
  }
}

void partitionPrime(int value)
{
  int *partition = malloc(sizeof(int) * value);
  partitionPrimeHelper(value, partition, 0);
  free(partition);

}

