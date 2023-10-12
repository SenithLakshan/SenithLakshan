#include <stdio.h>

struct module {
	
	int mark1,mark2,mark3,mark4;
	
};

int main(){
	
	struct module st1;
	
    int stcount = 0, highestSum = 0, highestSumIndex = -1;
	
	while ( stcount < 3){
		
		int i = 0;
		int sum = 0;
		
		//get marks for module 1
		printf("\nEnter Student %d module mark 1 :",stcount+1);
		scanf("%d", &st1.mark1);
		sum += st1.mark1;
		i++;
		
		//get marks for module 2
		printf("Enter Student %d module mark 2 :",stcount+1);
		scanf("%d", &st1.mark2);
		sum += st1.mark2;
		i++;
		
		//get marks for module 3
	    printf("Enter Student %d module mark 3 :",stcount+1);
		scanf("%d", &st1.mark3);
		sum += st1.mark3;
		i++;
		
		//get marks for module 4
		printf("Enter Student %d module mark 4 :",stcount+1);
		scanf("%d", &st1.mark4);
		sum += st1.mark4;
		i++;
		
		printf("\nsum of mark for student %d = %d\n",stcount+1,sum); //print current number
		
		if(sum > highestSum){
			
		highestSum  = sum; 
		highestSumIndex = stcount;	
			
		}
		stcount += 1;
	}
	
	
		if( highestSumIndex != -1){
			
			printf("\nHighest marks student is %d and sum of mark : %d",highestSumIndex + 1,highestSum);}
			
			else {
				printf("\nNo student data provided\n");
			}
			return 0;
		
	}
	

