#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "answer07.h"

List *List_createNode(const char * str)
{
  List *node = malloc(sizeof(List));
  node->str = strdup(str);
  node->next = NULL;
  return node;
}

void List_destroy(List *list)
{
  if (list == NULL) return;
  List_destroy(list->next);
  free(list->str);
  free(list);
}

int List_length(List *list)
{
  if (list == NULL) return 0;
  return 1 + List_length(list->next);
}
