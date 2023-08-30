#include <stdio.h>

int main(){

  int num1,num2,output;
  char operators;

  printf("Enter the first number :");
  scanf("%d",&num1);

  printf("Enter the operator (+ , - , / , *) : ");
  scanf(" %c",&operators);

  printf("Enter the secound number :");
  scanf("%d", &num2);

  switch (operators){
    case '+':
      output = num1 + num2 ;
    break;

    case '-':
      output = num1 - num2 ;
    break;

    case '/':
      output = num1 / num2 ;
    break;

    case '*':
      output = num1 * num2 ;
    break;

    default: 
      printf("This is a invalid operator\n");
  }
   printf("Answer is %d",output);

  return 0;
}