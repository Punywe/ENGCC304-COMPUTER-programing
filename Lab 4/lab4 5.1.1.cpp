#include <stdio.h>

int main(){
	/**
		Function Name : int main
	@param 	Input1 id      int       First   input from user 
	@param	Input2 time    int       second  input from user
	@param	Input3 salary  int       third   input from user
	@param	Input4 sum     int       fourth  input from user.
	@output output1 ID     int
	@output output2 ToTal  int
	*/
	
	int id ;     //     declaration int id
	int time ;   //     declaration int time
	int salary ; //     declaration int salary 
    int sum ;    //     declaration int sum
    
    printf("Input the Employees ID (Max. 10 chars) :") ;
	scanf("%d",&id) ; // input ID from user
	
	printf("Input the working hrs :") ;
	scanf("%d",&time) ; // input time from user
	
	printf("Salary amount/hr (Bath) :") ;
	scanf("%d",&salary) ; // input salary from user
	
	printf("Employees ID :%d \n",id) ; // output ID 
	
	  sum = time * salary ; // sum
	
	printf("Amount/day : %d",sum) ;  // output total
	   
	return 0 ;
} //end fuction
