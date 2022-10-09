#include <stdio.h>

struct Employee
{
char Name[100] ;
    char Job[100] ;
    int Age[100] ;
    int Salary[100] ;    
}typedef employee;

void Input(employee [] ,int);
void Max_Age_Salary(employee [], int);
int main(){


    return 0 ;
}

void Input(employee Data_Employee[] ,int){

    int i = 0 ;

       for ( i = 0; i < 7; i++){
        printf("Name :");
        scanf("%s",Data_Employee[i].Name);
        printf("Age :");
        scanf("%d",&Data_Employee[i].Age);
        printf("Salary");
        scanf("%d",&Data_Employee[i].Salary);
        printf("Job :");
        scanf("%s",Data_Employee[i].Job);    
    }
}

void Max_Age_Salary(employee Data_Employee[] ,int){

int min[100] ;
for(int i = 0 ; i < 7 ; i++ ){
    min[100] = Data_Employee[i].Age[0];
    if(Data_Employee[i].Age > min){
      min[100] = Data_Employee[i].Age ;
    }else if(Age[i] < max){
      max = Age[i];
    }
}

}