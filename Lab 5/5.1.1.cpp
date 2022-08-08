#include <stdio.h>

int main(){
	int years ;
	 
	printf( "Input year : " ) ;
	scanf( "%d",&years) ;
	    
		
	 if(years % 4 == 0 ){
	 	printf( " Feb  = 29 day" ) ;
	 } 
	 else {
	 	printf( " Feb = 28 day " ) ;
	 }//end if   
	
	return 0 ;
}
