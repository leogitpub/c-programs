
#include <stdio.h>
int add( int, int);
double a=2;
int *h = 12;

int b[] = { 1,2,3,4};
int add(int x , int y){
return x+y;
}
int* p = b ;
char c1[]= "Hello";
char* c3 = "Hello";
char * c2;
char ** l = c1;
int main() {
   /* my first program in C */
   printf("Hello, World! \n");
   printf("%d \n", sizeof(a));
c2=c1;
   printf("hi  %c %d \n ",*(c1+1), c2);
   printf(" array %d  %d %d %d %d %d %d %c\n ", b, b+1, p, p+1, *p, *p +1, *b , *(c1+8));

   int c;
   int (*k)(int, int);
   k = add ;
   c = k(2,3);
   printf("my %d %d %d \n", c, add, *k);

printf("char %c, %c,  %c, %d, %c , %c, %d, %d, %c , %c,%d, %d,  %c, %d, %d", *(l+0), *l, *(l+3), l, c1, *l, &c2[0],  &c2[1], *(c1+1), *(c1+2), (l+1), (l+2), *(l+1), &c1[0], &c1[1]);
   return 0;
}
