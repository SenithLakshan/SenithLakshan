#include <stdio.h>

 int main()
{

  char type;
  float balance,amount;

  printf("Enter account type (w - withdrawal , d - diposite) :");
  scanf("%c", &type);

  if (type == 'd' || type == 'D'){
    printf("You have selected to deposit money\n");

    printf("Enter account balance :");
    scanf("%f", &balance);

    printf("Enter your amount :");
    scanf("%f", &amount);

    balance = balance + amount;
    
  }
  else if (type == 'w' || type == 'W'){

    printf("You have selected to withdraw money\n");

    printf("Enter account balance :");
    scanf("%f", &balance);

    printf("Enter your amount :");
    scanf("%f", &amount);

    balance = balance - amount;
    
  }
  
  else {

    printf("You have selected an invalid transaction type");
  }

  printf("Your current account balance is Rs.%.2f",balance);

  return 0;
}