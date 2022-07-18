#include <stdio.h>


int main() {
/**
	Function Name : int main
	@para 	Input1 text      char       First   input from user 
	@para	Input2 decimal   float      second  input from user
*/
	char text ;     // declaration char
	float decimal ; // declaration float
	
	printf(" Please enter value : ") ;
	scanf(" %f %c ",&decimal,&text ) ;  // input value from user 
	printf(" %.2f %c ",decimal,text ) ; // output value
	
	return 0 ;
} // End Function
