#include <stdio.h>
void f( int **px );
/* function to generate and return random numbers */
int getRandom( ) {

   static int  r[10];
   int i;

   /* set the seed */
   //srand( (unsigned)time( NULL ) );
  
   for ( i = 0; i < 10; ++i) {
      r[i] = i;
      printf( "r[%d] = %d\n", i, r[i]);
   }
    printf(" array r %d ", r); 
   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int p;
   int i;
   int *d = 22;
   int a[] = { 1,2,3};
int c = 12;
char* myStrings[] = {
    "Hello",
    "World"
};
   int *  b ;
int **ab ;

b = &c ;
ab = &b ;
printf("char arry %c , %c \n", *(myStrings + 0), **myStrings);

   printf("array %d , %d , %d  %d , %d \n ", *a, a[0], b, **ab, d );

   p = getRandom();
	
   for ( i = 0; i < 10; i++ ) {
      printf( "*(p + %d) : %d\n", i, (p + i));
   }
f( ab );
printf(" C has %d ", c);

char s[] ="Hello";
printf(" \n String is %s \n, Char is %c \n ", s, s[0]);
char *y[] = { "my", "bad" };
printf(" 2nd string %s , %c , %c ", y[0] , *y[0], *y[1]);
return 0;
}
void f( int **px )
{
	printf("before %d, %d " , *px, **px);
    *px = 20;
    printf( "*px = %d\n", *px );
}
