#include <stdio.h>

int main(){

  int num,sum=0,i=0;  // Initialize variables to store user input, sum, and count
  float avg;  // Initialize a variable to store the average

  while(1){

    printf("Enter module mark (Enter -1 to stop) :");
    scanf("%d", &num);
    
    if( num < 0){

      printf("Thanks for the using\n");
      break;  // If the entered number is less than 0, exit the loop
      
    }
    else {

      printf("Entered number is : %d\n", num);
      sum += num;
      i++;
    }
    
  }
   printf("Sum of the Entered %d Numbers: %d\n", i, sum); // Print the sum of the entered positive numbers
   printf("Average of the Entered Number is :%.2f\n",(float)(sum)/i);// Print the avg of the entered positive numbers
  
  return 0;
}