#include <stdio.h>

int main(void) {

  int  number;

  printf("Enter the number : ");
  scanf("%d", &number);

  if( number < 0) {
    printf("%d", -number);
  }
else {
  printf("%d",number);
}
  
  return 0;
}