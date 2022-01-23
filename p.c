


#include <stdio.h>
#include<stdlib.h>

int *Hello();
void Print();

int * Hello(){
int *i = (int *)malloc(sizeof(int));
int a = 4, b = 1;
*i= a+b;
printf("Value in i : %d \n", *i);
return &i;
}

void Print(){
printf("Hi");

}

int main(){

  int* op = Hello();
Print();

if (op != NULL)
    {
     printf("Sum = %d", *op); 
    }
    //free(op);
}
