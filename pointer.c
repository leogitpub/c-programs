#include <stdio.h>
#include <stdlib.h>
int *Hello();

void PrintHello(char *s){
 printf("Hello ,%s", s);
}
int Adds(int a , int b){
int *c = malloc(sizeof(int));
*c = a+b;
return c;

}
int * Add(int a , int b){
 int *c = malloc(sizeof(int));
*c = a+b;
printf("Address of c : %d \n", &c);
int *k = &c;
printf("Value in c : %d \n", *k);
return &c;

}
int * Hello(){
int *i = (int *)malloc(sizeof(int));
int a = 4, b = 1;
*i= a+b;
printf("Value in i : %d \n", *i);
return &i;
}


int main(){

   int a;
   void (*ptr)(char *);
   ptr = &(PrintHello);
   (*ptr)("Tom \n");
   
   int * (*pt)(int, int);
   pt = &(Add);
  // c = pt(2,3);
  int* t = Add(2,4);
   a = Adds(2,5);
  int* op = Hello();

if (op == NULL){
  printf("Sum in Adds: %d \n", a);
  printf("Sum in Addin: %d \n", *op);
  printf("Sum in Add : %d \n", *t);
}

free(op);
 

  
}
