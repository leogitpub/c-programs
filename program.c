#include <stdio.h>
int fun(int *);
int fun(int *xi){
*xi = 123;
int y = 123445;
return (y);

}
int main(){
String t = "dfghhjkkkkj";

       	int i = 32770;
int *j;
j =&i;
printf("value of i= %d \n",*j);
int b = fun(j);
printf("address of i= %u \n", *j);
printf("ggh %d\n",b);
return 0;
}
