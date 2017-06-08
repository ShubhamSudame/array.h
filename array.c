#include <stdio.h>
#include "array.h"

void read(int *p){
  extern int i;
  printf("Enter Array elements: ");
  for(i = 0; i< SIZE; i++){
    scanf("%d",(p+i));
  }
}

void display(int *p){
  extern int i;
  printf("\n The array elements : ");
  for(i = 0; i <SIZE; i++){
    printf("%d ",*(p+i));
  }
}

void ascend_sort(int *p){
  int j,temporary;
  for(j =0; j<SIZE; j++){
    for(i = j+1; i< SIZE;i++){
      if(*(p+j) > *(p+i)){
        temporary = *(p+j);
        *(p+j) = *(p+i);
        *(p+i) = temporary;
      }
    }
  }
  display(p);
}

void descend_sort(int *p){
  int j,temporary;
  for(j =0; j<SIZE; j++){
    for(i = j+1; i< SIZE;i++){
      if(*(p+j) < *(p+i)){
        temporary = *(p+j);
        *(p+j) = *(p+i);
        *(p+i) = temporary;
      }
    }
  }
  display(p);
}
