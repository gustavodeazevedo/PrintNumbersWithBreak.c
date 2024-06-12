#include <stdio.h>

int main(void) {

int i; 

  for(i=1; i<=100; i++){

    if(i==80){
      break;
    } 
     printf("\nI = %d", i);
  }
  
  return 0;
}