#include <stdio.h>
#include <string.h>

int main(){

char str[10];
int n = 0 ;
int i = 0 ;

  printf("Please Enter your Name : ");
  gets(str);

    //printf("-------|%s\n",str);

    n = strlen(str);
    //printf("\n-------|value : %d\n",n);

   while(n >= i){
    n--;
        printf("%c",str[n]);
    }
printf("\n------------------------");

return 0 ;
}
