#include <stdio.h>


char x[] = "Hello";
char *y = x;
char *z[] = { "Boy", "Opps"};
char **p = x;
char ***k = z;

//char q[] = { "Girl", "Top"};
//char **b = q;
int main(int argc, char *argv[]){
z[2] = "Hi";

printf("Address of  %d , %d, %d, %d \n", x, y, z, p);
printf("Incr + 1    %d , %d, %d, %d \n", x+1, y+1, z+1, p+1);
printf("Values *    %c , %c, %s, %c, %c \n", *x, *y, *z, *p, **z);
printf("Values *+1  %c , %c, %s, %c, %c \n", *(x+1), *(y+1), *(z+1), *(p+1), **(z+1));
printf("Address of  *  %d, %d, %d\n \n", *(z), *(z+1)), *(k+0);
printf("number of arguments pass, %d \n", argc);

printf("valuesr of arguments %s , %s, %s, %s, %s\n", argv[0], argv[1], z[2], z[0], z[1]);
printf("valuesr  %c , %c, %c, %c, %c, %c \n", x[0], x[1], y[0], y[1], p[0], p[1]);
}
