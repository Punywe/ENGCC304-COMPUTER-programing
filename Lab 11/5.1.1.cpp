#include <stdio.h>
#include <iostream>

char DetectOperator( char [],char [],char [] ) ; 
int GetResult( int ) ; 

int main(){
  char N1[2];
  char N2[2];
  char N3[2];
  int total = 0;
 
      printf("Number --|");
      scanf("%s %s %s",N1,N2,N3);
      DetectOperator(N1,N2,N3);
      total = DetectOperator(N1,N2,N3);
      printf("%s %s %s = %d",N1,N2,N3,GetResult(total));
      return 0 ;
}

char DetectOperator( char N1[2],char N2[2],char N3[2]){
  
  int S1 ;
  int Sum = 0 ;
  int S3 ;

  S1 = atoi(N1);
  S3 = atoi(N3);
 
    switch (N2[0])
    {
    case '+':
      Sum = S1 + S3 ;
      break;
    case '-':
      Sum = S1 - S3 ;
      break;
      case '*':
      Sum = S1 * S3 ;
      break;
      case '/':
      Sum = S1 / S3 ;
      break;
    default:
      break;
    }
  
 return (Sum);
} 

int GetResult( int total){
  
  return (total);
}