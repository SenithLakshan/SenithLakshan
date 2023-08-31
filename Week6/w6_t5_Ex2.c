#include <stdio.h>

int main(){

  int num,sum,count; // store the variable 
  float average;
  
 /*  Use a while loop to continuously read numbers until a negative number is entered */
  
  while(1){

    scanf("%d",&num); // scan the enter number

    if( num < 0){

      printf("This is a negative number");
      break;
    }

    if( num > 0){

      count++; //count positive number
      sum += num;  //calculation of sum of positive numbers
      
    }

    printf("Enter number is :%d",num);

    if( count > 0 ){

      average = sum / count ;
      printf("Average of the entered positive number is :%.2f",average);
      printf("Addition of the entered positive number is :%d",sum);
      
    }
    else {
      printf("No positive number entered");
    }
    
  return 0;
}