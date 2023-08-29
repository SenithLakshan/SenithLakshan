#include <stdio.h>

int main(){

  int num1,num2,output;
  char operators;

  printf("Enter the first number :");
  scanf("%d", &num1);

  printf("Enter the operator (+ , - , / , *) :");
  scanf(" %c", &operators);

  printf("Enter the secound number :");
  scanf("%d", &num2);

  if(operators == '+'){
    output = num1 + num2; 
  }
  else if(operators == '-'){
    output = num1 - num2;
  }
  else if(operators == '/'){
    output = num1/num2;
  }
  else if(operators == '*'){
    output = num1*num2;
  }
  else {
    printf("invalid operator");
  }

  printf("Answer is %d",output);
  
  return 0;
}