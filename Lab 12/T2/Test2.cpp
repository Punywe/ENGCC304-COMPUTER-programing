#include <stdio.h>

int count = 0 ;
struct Employee{
    char name[50] ;
    int monney ;
    int year ;
}typedef employee ;

void enter(employee[], int) ;
void output_data_calculate(employee[], int) ;

int main(){
    int n = 100 ;
     employee Data_Base [n] ;
     enter(Data_Base, n) ;
     output_data_calculate(Data_Base, n) ;
    return 0 ;
}


void enter(employee Data_Base[], int){
    
    int i = 0 ; // loop input
    char c ; 
    bool check ;
      
do{ 
    printf("Do you want to Enter Employee Information? (y/n) : ") ;
    scanf("%s",&c) ;
       switch (c){

            case 'n':
            check = false ;
            break ;
       
            default: // input y
            check = true ;
       
            printf("Employee Name : ") ;
            scanf("%s",Data_Base[i].name) ;
            printf("Employee salary : ") ;
            scanf("%d",&Data_Base[i].monney) ;
            printf("Employee duration : ") ;
            scanf("%d",&Data_Base[i].year) ;

            i++ ; 
            count++ ; //count + 1 for count of loop ไม่เกีี่ยวกัน loop
       }//end swich             
   }//end do while
        while (check) ; //check to logic
}

 void output_data_calculate(employee Data_Base[],int){
    int max = 0 ; //for most monney employee 
    int data = 0 ;// for data employee have most monney
    int a = 0 ; // loop Payment of every month
    int i = 0 ; // loop output
    float sum = 0 ; //keep total monney
    float summax ; //swap to float

while (a < count){
    sum = sum + Data_Base[a].monney ;
    a++ ;
}
while( i < count ) {
	while(Data_Base[ i ].monney > max) {
	    max = Data_Base[ i ].monney ;
	    data = i ;
	    break ;
	}
		i++ ;	
	}

    summax = Data_Base[data].monney ;
    // Output
        printf("-------------------------------------------\n") ;
        printf("Payment of every month : %.0f",sum) ;
        printf("\nAverage of Salary : %.2f",sum/count) ;
 		printf("\n***Most Salary in this business***\n") ;
        printf("Name is : %s (%d year)\n",Data_Base[data].name,Data_Base[data].year) ;
        printf("Salary : %.2f",summax);
        printf("\n-------------------------------------------") ;
        
 }