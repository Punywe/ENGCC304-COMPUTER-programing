#include <stdio.h>
#include <iostream>
#include <string.h>
int main(){

    char kuy[3];
    char ppppp[100];
    int talk[3];
     
    printf("Nunber -------------| ");
    gets(kuy);
   // talk[0] = atoi(kuy);
    //talk[3] = atoi(kuy);
    for(int i = 0 ; i < 3 ; i++){
    printf("%d ",kuy[i]);
    }
    return 0 ;
}