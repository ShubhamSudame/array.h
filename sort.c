#include <stdio.h>
#include "array.h"

void main(){
  int array[SIZE];
  int *p;
  p = array;
  read(p);
  display(p);
  ascend_sort(p);
  descend_sort(p);

}
