#include<stdio.h>

int main(void){
  for(int j = 1; j <10; j++){
    for(int d = 1; d<10; d++){
      printf("%2dX%2d=%3d",d,j,d*j);
    }
    printf("\n");
  }
  return 0;
}
